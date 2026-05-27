#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    long long n, pots, maxBlock;
    scanf("%lld %lld %lld", &n, &pots, &maxBlock);

    long long totalRoses = 0, fullBlocks = 0;
    vector<long long> remainders;
    for (int i = 0; i < n; i++) {
      long long count;
      scanf("%lld", &count);
      totalRoses += count;
      fullBlocks += count / maxBlock;
      if (count % maxBlock > 0) remainders.push_back(count % maxBlock);
    }

    long long rosesFromFull = fullBlocks * maxBlock;
    sort(remainders.rbegin(), remainders.rend());

    int numRem = remainders.size();
    vector<long long> prefix(numRem + 1, 0);
    for (int i = 0; i < numRem; i++)
      prefix[i + 1] = prefix[i] + remainders[i];

    long long lo = 0, hi = totalRoses;
    while (lo < hi) {
      long long mid = lo + (hi - lo + 1) / 2;
      long long blocks;
      if (mid <= rosesFromFull) {
        blocks = (mid + maxBlock - 1) / maxBlock;
      } else {
        long long extra = mid - rosesFromFull;
        int jlo = 1, jhi = numRem;
        while (jlo < jhi) {
          int jmid = (jlo + jhi) / 2;
          if (prefix[jmid] >= extra) jhi = jmid;
          else jlo = jmid + 1;
        }
        blocks = fullBlocks + jlo;
      }
      if (mid + blocks <= pots + 1) lo = mid;
      else hi = mid - 1;
    }

    printf("%lld\n", lo);
  }
  return 0;
}