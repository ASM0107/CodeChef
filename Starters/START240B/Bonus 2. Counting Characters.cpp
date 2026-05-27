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
    string s;
    cin >> s;
    int a = count(s.begin(), s.end(), 'a');
    cout << a << " " << n - a << "\n";
  }

  return 0;
}
