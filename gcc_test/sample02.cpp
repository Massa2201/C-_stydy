#include<bits/stdc++.h>
using namespace std;

bool check(int n) {
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      ans += 1;
    }
  }
  if (ans == 3 && n % 2 != 0) {
    return true;
  }
  else {
    return false;
  }
}

int main() {

  int n, ans = 0;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    if (check(i) == true) {
      ans += 1;
    }
  }
  cout << ans << endl;
}