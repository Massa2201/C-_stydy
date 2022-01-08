#include<bits/stdc++.h>
// #include<math.h>
using namespace std;
using ll = long long;
using ld = long double;
// #include <iomanip> // setprecisionを使用するのに必要

int main() {
  int n;
  ld s, d, q, w, z, max;
  z = 0;
  max = 0;
  cin >> n;
  // d = n - 1;
  // for (int i = 0; i < n; i++) {
  //   s += d;
  //   d--; 
  // }
  vector<ld> all(1000000);
  vector<ld> vec_x(n);
  vector<ld> vec_y(n);
  for(int i = 0; i < n; i++) {
    cin >> vec_x.at(i);
    cin >> vec_y.at(i);
  }

  for (int j = 0; j < n - 1; j++) {
    for (int k = 1 + j; k < n; k++) {
      s = vec_x.at(j) - vec_x.at(k);
      d = vec_y.at(j) - vec_y.at(k);
      ld q = s*s + d*d;
      // cout << q << endl;
      w = sqrt(q);
      // cout << w<<endl;
      all.at(z) = w;
      z++;
    }
  }
  max = all.at(0);
  for(int i = 1; i < z; i++) {
    if (max < all.at(i)) {
      max = all.at(i);
    }
  }
  cout << std::fixed << std::setprecision(10) << max << endl;
  
}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/