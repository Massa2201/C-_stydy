#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
  int count = 0;
  for(int i = 1; i < 5; i++) {
    if(data.at(i) == data.at(i - 1)) {
      count += 1;
    }
  }
  if(count > 0) {
    cout << "YES" << "\n";
  }
  else {
    cout << "NO" << "\n";
  }
}