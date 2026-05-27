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
	    map<int, int> first, last;
	    
	    for (int i = 0; i < n; i++) {
	        if( !first.count(a[i])) first[a[i]] = i;
	        last[a[i]] = i;
	    }
	    
	    int result = INT_MAX;
	    for (auto &[v,f] : first) {
	        int l = last[v];
	        if(l != f){
	            result = min(result , f + n - 1 - l);
	        }
	    }
	    cout << (result == INT_MAX ? -1:result) << endl;
	}
	return 0;

}
