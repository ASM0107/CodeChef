#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int nm = 0, np = 0;
        for (int i = 0; i < N; i++) {
            int a;
            cin >> a;
            if (a == -1) nm++;
            else if (a == 1) np++;
        }

        vector<int> ans;

        if (nm == 0 && np == 0) {
            ans = {0};
        } else if (nm == 0) {
            ans = {-1};
        } else if (np == 0) {
            ans = {1};
        } else if (nm == 1 && np == 1) {
            ans = {0};
        } else if (nm == 1) {
            ans = {-1, 0};
        } else if (np == 1) {
            ans = {0, 1};
        } else {
            ans = {-1, 0, 1};
        }

        for (int i = 0; i < (int)ans.size(); i++) {
            if (i > 0) cout << ' ';
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}
