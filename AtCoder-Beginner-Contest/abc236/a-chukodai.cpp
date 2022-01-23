#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  string s;
  cin >> s;
  char c, d;
  int a, b;
  cin >> a >> b;

  c = s.at(a - 1);
  s.at(a - 1) = s.at(b - 1);
  s.at(b - 1) = c;

  cout << s << endl;
}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/