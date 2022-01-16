#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  int a, b, c, s;
  int sum1, sum2, sum3;

  cin >> s;
  a = s / 100;
  b = s / 10 % 10;
  c = s % 10;

  sum1 = a * 100 + b * 10 + c;
  sum2 = c * 100 + a * 10 + b;
  sum3 = b * 100 + c * 10 + a;
  cout << sum1 + sum2 + sum3 << endl;
}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/