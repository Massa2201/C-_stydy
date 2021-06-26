#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  int d = 0;
  cin >> a >> b >> c;
  
  if(a > b) {
    if(b > c) {
      d = a + b;
    }
    else {
      d = a + c;
    }
  }
  else {
    if(a > c) {
      d = a + b;
    }
    else {
      d = b + c;
    }
  }
  cout << d << "\n";
}