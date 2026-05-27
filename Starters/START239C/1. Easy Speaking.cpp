#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        string vowels = "aeiou";
        int cnt = 0;
        bool hard = false;
        for (char c : s) {
            if (vowels.find(c) != string::npos)
                cnt = 0;
            else {
                cnt++;
                if (cnt >= 4) { hard = true; break; }
            }
        }
        cout << (hard ? "Yes" : "No") << "\n";
    }
    return 0;
}
