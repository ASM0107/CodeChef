#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,K;
	cin >> N >> K;
	int req = (N/2) + 1;
	int ans = max(0, req - K);
	
	cout << ans << endl;
	return 0;
}
