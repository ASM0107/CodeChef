#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const int INF = 1e9;
const ll LINF = 1e18;
const double PI = acos(-1.0);
const double EPS = 1e-9;

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) (int)(v).size()
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, a, b) for (int i = (a); i >= (b); i--)
#define each(x, v) for (auto &x : v)

#ifdef LOCAL
#else
#endif
void solve() {
  int n;
  cin >> n;
  vi a(n);
  each(x, a) cin >> x;

  int mn = *min_element(all(a));
  int cnt = count(all(a), mn);
  cout << (cnt >= 2 ? "YES" : "NO") << "\n";
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
