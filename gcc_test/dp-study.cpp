#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> dp(n);
  dp.at(0) = 0;

  for (int i = 1; i < n; i++) {
    if (i == 1 || i == 2) {
      dp.at(i) = 1;
    }
    else {
      dp.at(i) = dp.at(i - 1) + dp.at(i - 2);
    }
  }
  for (int i = 0; i < n; i++) {
    cout << dp.at(i) << " ";
  }
}