#include <bits/stdc++.h>
using namespace std;

int main() {
	// cost for 1st 20 balls is 200
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    
	    if(x <= 20){
	        cout << x * 10 << endl;
	    }
	    
	    else{
	        int cost = 200 + ((x - 20) / 2) * 5;\
	        cout << cost << endl;
	    }
	
	}
	return 0;

}
