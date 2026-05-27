#include <bits/stdc++.h>
using namespace std;

int main() {
	// atmost x are selected
	// same score form a cluster
	// max candidates in 2nd round needed
	// N = no of participants 
	// X = max amt of candidates selected
	// K = no of clusters
	// scores are to be sorted in descending order 
	// pick the first k clusters and sum their no of apperances up
	int t;
	cin >> t;
	while(t--){
	    int N, X , K;
	    cin >> N >> X >> K;
	    vector<int> a(N);
	    
	    for(int i = 0; i < N; i++){
	        cin >> a[i];
	    }
	    
	    sort(a.begin() , a.end() , greater<int>());
	    
	    int clusters = 0;
	    int selected = 0;
	    
	    for(int i = 0; i <N; ){
	        int freq = 0;
	        int score = a[i];
	        
	        while(i < N && a[i] == score){
	            freq++;
	            i++;
	        }
	        clusters++;
	        
	        if(clusters <=K){
	            selected += freq;
	        }
	    }
	    
	    cout << min(selected, X) << endl;
	}
    return 0;
}
