#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b, c, d, e, f, t;

  cin >> t;

  a = t*t + 2 * t + 3;
  b = a + t;
  e = b*b + 2 * b + 3;
  c = a*a + 2 * a + 3;
  d = e + c;
  f = d*d + 2 * d + 3;

  cout << f << endl;


}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

vector<int> vec(N);
for (int i = 0; i < N; i++) {
  cin >> vec.at(i);
}
*/