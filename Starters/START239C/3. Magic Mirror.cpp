#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> a(n);
	    for (int i = 0; i < n; i++) {
            cin >> a[i];
	    }
        int s = a[0] + a[n - 1];
        bool truth_of_life = true;
        for (int i = 0; i < n / 2; i++) {
            if (a[i] + a[n - 1 - i] != s) {
                truth_of_life = false;
                break;
            }
        }
        cout << (truth_of_life ? "Yes" : "No") << "\n";
	    
	}
    return 0;
}
