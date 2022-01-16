#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  int n, r;
  cin >> n;
  vector<int> vec(n);

  for(int i = 0; i < n; i++) {
    cin >> vec.at(i);
  }

  r = vec.at(0);
  for (int i = 1; i < n; i++) {
    if(r >= vec.at(i)) {
      break;
    }
    else {
      r = vec.at(i);
    }

  }
  cout << r << endl;
}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/