#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  int count = 0;
  cin >> a >> b >> c >> d;

  if(b < c * d) {
    for (int i = 0; a + b * i > d * (c * i); i++) {
      count += 1;
    }
    cout << count << "\n";
  }
  else {
    cout << -1 << "\n";
  }
  
  
}