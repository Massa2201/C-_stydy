#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  ll n, cnt, a, b, c, sum;
  cnt = 0;
  cin >> n;
  vector<int> vec(4 * n - 1);
  sum = 4;
  for (int i = 0; i < 4 * n - 1; i++) {
    cin >> vec.at(i);
    cnt += vec.at(i);
  }
  if (n != 1) {
    sum = 2 * n * (n + 1);
  }
  // cout << cnt << "aaa" << sum << endl;
  cout << sum - cnt << endl;
}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/