#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, cnt = 0;
  //, s;
  //cin >> s;
  cin >> n;
  //vector<int> s(n);
  string s;

  //for (int i = 0; i < n; i++) {
  //  cin >> s.at(i);
  //}
  cin >> s;

  for (int i = 0; i < n; i++) {
    if (s.at(i) == '1') {
      cnt = i;
      break;
    }
  }

  if ( cnt % 2 == 0) {
    cout << "Takahashi" << "\n";
  }
  else {
    cout << "Aoki" << "\n";
  }
}