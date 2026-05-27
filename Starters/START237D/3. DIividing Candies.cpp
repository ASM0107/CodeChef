#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int ans = 0;

        for (int i = 0; i < N; i++) {
            int a;
            cin >> a;

            if (a % X == 0) {
                ans = max(ans, a);
            }
        }

        cout << ans << endl;
    }

    return 0;
}