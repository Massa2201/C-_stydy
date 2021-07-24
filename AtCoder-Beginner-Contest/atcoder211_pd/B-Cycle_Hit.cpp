#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3 >> s4;
  int cnt = 0;

  if(s1 != s2 && s3 != s4) {
    if(s1 != s3 && s2 != s4) {
      if (s1 != s4 && s2 != s3) {
        cnt = 1;
      }
    }
  }
  
  if (cnt == 1) {
    cout << "Yes" << "\n";
  }
  else {
    cout << "No" << "\n";
  }
}

