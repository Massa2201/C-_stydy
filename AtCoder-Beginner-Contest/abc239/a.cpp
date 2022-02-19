#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  ld n, a, b;
  ll cnt = 0;
  ll ans = 0;

  cin >> n;
  a = n * (12800000 + n);
  b = sqrt(a);

  std::cout.precision(10);
  cout << b << endl;
}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/