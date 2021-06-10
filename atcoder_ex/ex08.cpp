#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int x, price, N;
  string text;

  cin >> x;

  if(x == 1) {
    
    cin >> price;
    cin >> N;

    cout << N * price << endl;
  }

  if(x == 2) {

    cin >> text >> price >> N;

    cout << text + "!" << endl;
    cout << N * price << endl;
  }
}