#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  for(N; N > 0; N--) {
    
    int i = 1;
    int b;
    string a;

    cout << "符号を入力してください:";
    cin >> a;

    cout << "数字を入力してください";
    cin >> b;

    if(a == "+") {
    cout << i + ":" + A + b << endl;
    }

    if(a == "-") {
    cout << i + ":" + A - b << endl;
    }

    if(a == "*") {
    cout << i + ":" + A * b << endl;
    }

    if(a == "/") {
    cout << i + ":" + A / b << endl;
    }
  }
}