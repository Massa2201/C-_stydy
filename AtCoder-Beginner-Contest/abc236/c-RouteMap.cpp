#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> sta(n);
  vector<string> sta2(m);
  vector<string> cnt(n);

  for (int i = 0; i < n; i++) {
    cin >> sta.at(i);
  }
  for (int i = 0; i < m; i++) {
    cin >> sta2.at(i);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cnt.at(i) = "No";
      if (sta.at(i) == sta2.at(j)) {
        cnt.at(i) = "Yes";
        break;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << cnt.at(i) << endl;
  }
  // TLE: イテレータをちゃんと理解していないのでコメントアウトで残し，後で復習する
  // for (int i = 0; i < n; i++) {
  //   auto itr = find(sta2.begin(), sta2.end(), sta.at(i));
  //   if (itr == sta2.end() ) {
  //     cout << "No" << endl;
  //   }
  //   else {
  //     cout << "Yes" << endl;
  //   }
  // }
}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/