#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  ll h, w;
  cin >> h >> w;
  vector<vector<ll>> a(h, vector<ll>(w));
  vector<vector<ll>> b(w, vector<ll>(h));

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a.at(i).at(j);
      b.at(j).at(i) = a.at(i).at(j);
    }
  }

  for (int i = 0; i < w; i++) {
    for (int j = 0; j < h; j++) {
      cout << b.at(i).at(j);
      if (j == h -1) {
        break;
      }
      cout << " ";
    }
    cout << endl;
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