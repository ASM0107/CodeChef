#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	int lead = x + z - y;
	int nscore = lead + 1;
	cout << max(0, nscore);
    return 0;
}
