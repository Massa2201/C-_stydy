#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, x, cnt, sum = 0;
  

  cin >> n >> x;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
    sum += a.at(i);
  }
  cnt = n / 2;
  sum -= cnt;

  if (x >= sum) {
    cout << "Yes" << "\n";
  }
  else {
    cout << "No" << "\n";
  }

}