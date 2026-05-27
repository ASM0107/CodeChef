#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<int, int> freq;
    int mx = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      freq[x]++;
      mx = max(mx, freq[x]);
    }
    cout << n - mx + 1 << "\n";
  }

  return 0;
}
