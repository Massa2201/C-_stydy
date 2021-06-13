#include <bits/stdc++.h>
using namespace std;

/*メモ
  ・これはYがあれば袋が４になるって単純な問題だと思ったがどうなのか

*/
int main() {

  int N;
  int count = 0;
  string S;

  cin >> N;

  for(int i = 0; i < N; i++) {

    cin >> S;

    if(S == "P") {
      count += 2;
    }

    else if(S == "W") {
      count += 2;
    }

    else if(S == "G") {
      count += 2;
    }

    else if(S == "Y") {
      count += 1;
    }

    else {
      cout << "error" << endl;
    }
  }

  if(count % 2 == 0) {
    cout << "Three" << "\n";
  }

  else if(count % 2 != 0) {
    cout << "Four" << "\n";
  }
}