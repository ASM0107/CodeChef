#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        
	int X,Y,Z;
	cin >> X >> Y >> Z;
	
	int arr[3] = {X,Y,Z};
	sort(arr,arr + 3);
	
	int a = arr[0];
	int b = arr[1];
	int c = arr[2];
	int moves = max(0, c - a - b + 1);
	cout << moves << endl;
    }
    return 0;
}
