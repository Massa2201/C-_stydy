#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  ll n;
  ld a, b;
  ll cnt = 0;
  ll ans = 0;

  cin >> n;

  if (n > 0) {
    ans = n / 10;
  }
  else if (n == 0) {
    ans = 0;
  }
  else {
    if (n % 10 == 0) {
      ans = n / 10;
    }
    else {
      ans = n / 10 - 1;
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