#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  ll n, a, b;
  int c;
  ll cnt = 1;
  ll ans = 0;
  ll num = 998244353;
  ll in[19] = {9, 90, 900, 9000, 90000, 900000, 9000000, 90000000, 900000000, 9000000000, 90000000000, 900000000000, 90000000000000, 90000000000000, 900000000000000, 9000000000000000, 90000000000000000, 900000000000000000, 9000000000000000000};
  
  cin >> n;
  ll d = n;
  while(d >= 9) {
    d /= 10;
    cnt++;
  }
  int f = cnt;

  if (cnt > 1) {
    a = n - in[cnt - 1];
    for (int i = 0; i < a; i++) {
      ans += i;
    }
    for (int i = 0; i < cnt - 1; i++) {
      for (int j = 0; j < in[cnt - 1 - j] + 1; j++) {
        ans += j;
      }
    }
  }
  else {
    for (int i = n; i > 0; i--) {
    ans += i;
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