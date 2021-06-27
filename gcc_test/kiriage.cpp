#include <bits/stdc++.h>
using namespace std;

int main() {

  long long a, b, c, d;
  long long ans;
  cin >> a >> b >> c >> d;
  long long e = c*d-b;
  if(e > 0) {long long ans = (a + e -1) / e;
  cout << ans << "\n";}
  else {
    cout << "error" << "\n";
  }
}