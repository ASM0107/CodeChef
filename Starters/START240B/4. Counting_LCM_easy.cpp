#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXN = 1000001;
int smallest_prime[MAXN];
ll pairs_leq[MAXN];

void precompute() {
  for (int i = 0; i < MAXN; i++)
    smallest_prime[i] = i;
  for (int i = 2; i * i < MAXN; i++) {
    if (smallest_prime[i] == i) {
      for (int j = i * i; j < MAXN; j += i) {
        if (smallest_prime[j] == j)
          smallest_prime[j] = i;
      }
    }
  }

  pairs_leq[0] = 0;
  for (int lcm_val = 1; lcm_val < MAXN; lcm_val++) {
    int remaining = lcm_val;
    ll lcm_pairs = 1;
    while (remaining > 1) {
      int prime = smallest_prime[remaining];
      int exp = 0;
      while (remaining % prime == 0) {
        remaining /= prime;
        exp++;
      }
      lcm_pairs *= (2 * exp + 1);
    }
    pairs_leq[lcm_val] = pairs_leq[lcm_val - 1] + lcm_pairs;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  precompute();

  int t;
  cin >> t;
  while (t--) {
    ll z;
    cin >> z;
    cout << z * z - pairs_leq[z] << "\n";
  }

  return 0;
}
