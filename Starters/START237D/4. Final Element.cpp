#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        while (n > 1) {

            for (int i = 0; i < n - 1; i++) {
                arr[i] = arr[i] ^ arr[i + 1];
            }
            
            n--;
        }

        cout << arr[0] << endl;
    }

    return 0;
}