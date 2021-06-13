#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  int i = 1;
  cin >> N >> A;

  for(N; N > 0; N--) {
    
    int b;
    string a;

    //cout << "符号を入力してください:";
    cin >> a;

    //cout << "数字を入力してください";
    cin >> b;

    if(a == "+") {
      A += b;
      cout << i << ":" << A << endl;
    }

    else if(a == "-") {
      A -= b;
      cout << i << ":" << A << endl;
    }

    else if(a == "*") {
      A *= b;
      cout << i << ":" <<  A << endl;
    }

    else if(a == "/") {
      A /= b;
      cout << i << ":" << A << endl;
    }

    else {
      cout << "error!" << endl;
    }

    i++;
  }
}