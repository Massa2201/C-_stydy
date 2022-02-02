#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  string s;
  int cnt = 0;
  int cnt2 = 0;
  cin >> s;
  int b = s.size();
  int c;
  vector<string> n(b);
  vector<string> j;
  for (int i = 0; i < b; i++) {
    n.at(i) = s.at(i);
  }
  // cout << b << endl << n.at(5) << endl;
  for (int i = b - 1; i >= 0; i--) {
    if(n.at(i) == "a") {
      cnt2++;
    }
    else {
      break;
    }
  }

  for (int i = 0; i < b - 1; i++) {
    if(n.at(i) == "a") {
      cnt2--;
    }
    else {
      break;
    }
  }

  for (int i = 0; i < b / 2; i++) {
    if (n.at(i) == n.at(b - 1 - i)) {
      continue;
    }
    cnt++;
  }
  if (cnt2 >= 1 && cnt >= 1) {
    cnt = 0;
    for(int i = 0; i < cnt2; i++) {
      j.push_back("a");
    }
    for (int i = 0; i < b; i++) {
      j.push_back(n.at(i));
    }
    c = j.size();
    for (int i = 0; i < c / 2; i++) {
      if (j.at(i) == j.at(c - 1 - i)) {
        continue;
      }
      cnt++;
    }
  }
  

  if (cnt >= 1) {
    cout << "No" << endl;
  }
  else {
    cout << "Yes" << endl;
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