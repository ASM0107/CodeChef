#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()
#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define each(x, v) for (auto &x : v)

void solve() {
  int n;
  cin >> n;
  string a, b;
  cin >> a >> b;

  vi pa, pb_pos;
  FOR(i, 0, n) {
    if (a[i] == '1') pa.pb(i);
    if (b[i] == '1') pb_pos.pb(i);
  }

  if (sz(pa) != sz(pb_pos)) {
    cout << -1 << "\n";
    return;
  }

  int ans = 0;
  FOR(i, 0, sz(pa)) {
    if (pa[i] != pb_pos[i]) ans++;
  }
  cout << ans << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
