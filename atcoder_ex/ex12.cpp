#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;
  
  int number = S.at(0);

  for(int i = 0; i < S.size(); i++ ) {
    char c = S.at(i);

    if(i % 2 != 0) {
      if(c == '+') {
        number += S.at(i + 1);
      }
      else {
        number -= S.at(i + 1);
      }
    }
  }
  cout << number << endl;
}