#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<long long> c(n);
  vector<long long> cnt(n - k + 1);
  for (int i = 0; i < n; i++) {
    cin >> c.at(i);
  }

  for (int i = 0; i < n - k + 1; i++) {
    for (int j = 0; j < k - 1; j++) {
      if (c.at(j + i) != c.at(j + i + 1)) {
        cnt.at(i) += 1;
      }
    }
  }
  cout << cnt.at(0) << "\n";
  int largest = 0;
  for (int i = 1; i < cnt.size(); i++) {
    if (cnt.at(i - 1) < cnt.at(i)) {
      largest = cnt.at(i);
    }
  }
  cout << largest << "\n";
}
// となりではなく，全体比較をするべきだった