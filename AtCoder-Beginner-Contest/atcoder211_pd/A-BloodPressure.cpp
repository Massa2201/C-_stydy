#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  float a, b, c;
  cin >> a >> b;

  c = (a - b) / 3 + b;

cout << c << "\n";
}

/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/