#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;
  
  int number = 1;

  for(int i = 0; i < S.size(); i++ ) {
    char c = S.at(i);

    if(i % 2 != 0) {
      if(c == '+') {
        number += 1;
      }
      else {
        number -= 1;
      }
    }
  }
  cout << number << endl;
}