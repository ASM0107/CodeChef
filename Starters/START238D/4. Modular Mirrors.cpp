#include <bits/stdc++.h>
using namespace std;

int main() {
	// given N and M, create an array Arr of length N, whose each element is less than M 
	// there exists one element with index i for which Ai > 0 -> atleast one positive element greater than zero 
	// for each index i btw 1 and N, Ai = (Ai-1 + Ai+1)mod M
	// outside the array is zero, hence we can assume A0 = 0 and An+1 = A0
	// A1 = 0 + A2; A2 = A2 + A3; A3 = 0; A4 = A5; A5 = A5 + A6;
	// A6 = 0; A6 = A5 + A7;
	// pattern repeats every 6 iters 
	// we'll take i = 1 cuz that is most basic to take
	int t;
	cin >> t;
	while(t--){
	    int N; 
	    long long M;
	    cin >> N >> M ;
	    // we account for 3 * a + 2 items, since that way we can have A0 and An+A1
	    if(N%3 != 2){
	        cout << -1 << endl;
	        continue;
	    }
	    
	    for(int i = 1; i <= N; i++){
	        int pos = i % 6;
	        
	        if(pos == 1 || pos == 2){
	            cout << 1;
	        }
	        else if( pos == 4|| pos == 5){
	            cout << M - 1;
	        }
	        else{
	            cout << 0;
	        }
	        
	        if(i != N) cout << " ";
	        
	    }
	    cout << endl;
	}
	return 0;
}
