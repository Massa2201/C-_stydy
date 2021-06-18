#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  int count = 0;
  cin >> s;

  for(int i = 50; i > 0; i--) {
    
    if(i - 1 == null) {
      if(s.at(i) == 'T') {
        count = 1;
      }
    }
  }
  
  if(count == 1) {
    cout << "YES" << "\n";
  }
  else {
    cout << "NO" << "\n";
  }
}