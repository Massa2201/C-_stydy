#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

// 1. 最初の点を0，0とみなして2コメを設定する
// 2．1の前に全部原点からと考えて，波形一致型アルゴリズムを作る
int main() {
  ll n, a, b, c, d, e;
  ll cnt = 0;
  ll ans = 0;

  cin >> a >> b >> c >> d;

  if ((abs(c - a) == 2 && abs(d - b) == 0) || (abs(c - a) == 0 && abs(d - b) == 2)) {
    cnt = 1;
  }
  else if (abs(c - a) == 1 && abs(d - b) == 1) {
    cnt = 1;
  }
  else if ((abs(c - a) == 1 && abs(d - b) == 3) || (abs(c - a) == 3 && abs(d - b) == 1)) {
    cnt = 1;
  }
  else if ((abs(c - a) == 4 && abs(d - b) == 0) || (abs(c - a) == 0 && abs(d - b) == 4)) {
    cnt = 1;
  }
  else if (abs(c - a) == 3 && abs(d - b) == 3) {
    cnt = 1;
  }
  else if ((abs(c - a) == 4 && abs(d - b) == 2) || (abs(c - a) == 2 && abs(d - b) == 4)) {
    cnt = 1;
  }

  if (cnt == 1) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/