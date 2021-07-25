#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);

  for (int i = 0; i < N; i++) {

    cin >> a.at(i);
  }

  int res = 0;
  bool check = false;
  while (true) {
    for (int i = 0; i < N; i++) {
      if (a.at(i) % 2 != 0) {
        check = true;
      }
    }
    if (check) {
      break;
    }
    for (int i = 0; i < N; i++) {
      a.at(i) /= 2;
      
    }
    res++;
  }
  cout << res << endl;
}