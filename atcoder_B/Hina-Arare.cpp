#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  int count = 1;
  string S;

  cin >> N;

  for(int i = 0; i < N; i++) {

    cin >> S;

    if(S == "P") {
      count *= 2;
    }

    else if(S == "W") {
      count *= 2;
    }

    else if(S == "G") {
      count *= 2;
    }

    else if(S == "Y") {
      count = 0;
    }

    else {
      cout << "error" << endl;
    }
  }

  if(count % 3 != 0) {
    cout << "Three" << "\n";
  }

  else if(count % 3 == 0) {
    cout << "Four" << "\n";
  }
}