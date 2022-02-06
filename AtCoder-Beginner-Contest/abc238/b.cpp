#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  ll n, a, b;
  ll cnt = 0;
  ll ans = 0;

  cin >> n;
  vector<int> aa(n);
  vector<int> c;
  vector<int> d(n);
  int k;
  for (int i = 0; i < n; i++) {
    cin >> aa.at(i);
    cnt += aa.at(i);
    if (cnt <= 360) {
      c.push_back(cnt);
    }
    else {
      cnt -= 360;
      c.push_back(cnt);
    }
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - 1; j > i; j--) {
      if (c.at(j) < c.at(j - 1)) {
        k = c.at(j);
        c.at(j) = c.at(j - 1);
        c.at(j - 1) = k;
      }
    }
  }

c.push_back(360);
ans = c.at(0);
  for (int i = 1; i < n + 1; i++) {
    if (ans < c.at(i) - c.at(i - 1)) {
      ans = c.at(i) - c.at(i - 1);
    }
  }
  cout << ans << endl;



}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/