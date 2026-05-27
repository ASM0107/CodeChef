#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        int N, Q;
        cin >> N >> Q;
        vector<int> A(N + 1);
        for (int i = 1; i <= N; i++)
            cin >> A[i];
        
        while (Q--) {
            int type;
            cin >> type;
            if (type == 1) {
                int u, x;
                cin >> u >> x;
                A[u] = x;
            } else {
                int L, R;
                cin >> L >> R;
                int M = R - L + 1;
                if (M == 1) {
                    cout << A[L] << '\n';
                } else if (M % 2 == 0) {
                    int mid = L + M / 2 - 1; 
                    cout << max(A[mid], A[mid + 1]) << '\n';
                } else {
                    int mid = L + M / 2; 
                    cout << max(min(A[mid - 1], A[mid]), min(A[mid], A[mid + 1])) << '\n';
                }
            }
        }
    }
    return 0;
}
