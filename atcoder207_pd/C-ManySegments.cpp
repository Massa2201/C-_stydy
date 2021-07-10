#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> l(n), r(n);
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t >> l[i] >> r[i];
    l[i] *= 2;
    r[i] *= 2;
    if (t >= 3) {
      l[i]++;
    }
    if (t % 2 == 0) r[i]--;
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (r[i] < l[j]) continue;
      if (r[j] < l[i]) continue;
      ++ans;
    }
  }

  cout << ans << "\n";
}