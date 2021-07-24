#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  ll num = 1000000007;
  int cnt = 0;
  int ss = 0;
  
  
  cin >> s;
  //string vec = reverse(s.rbegin(), s.rend());
  
  for (int i = 0; i < s.size(); i++) {
    if(s.at(i) == 'c') {
      for (int j = i; j < s.size(); j++) {
        if(s.at(j) == 'h' && i < j) {
          for (int d = j; d < s.size(); d++) {
            if(s.at(d) == 'o' && j < d) {
              for (int e = d; e < s.size(); e++) {
                if(s.at(e) == 'k' && d < e) {
                  for (int f = e; f < s.size(); f++) {
                    if(s.at(f) == 'u' && e < f) {
                      for (int g = f; g < s.size(); g++) {
                        if(s.at(g) == 'd' && f < g) {
                          for (int h = g; h < s.size(); h++) {
                            if(s.at(h) == 'a' && g < h) {
                              for (int k = h; k < s.size(); k++) {
                                if(s.at(k) == 'i' && h < k) {
                                  cnt = 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }// cnt == 1より，chokudaiは全てある

  if (cnt == 1) {

    for (int i = 0; i < s.size(); i++) {
      if(s.at(i) == 'i') {
        for (int j = i; j < 0; j--) {
          if (s.at(j) == 'a') {
            
          }
        }
      }
    }

  }

  if(cnt == 1) {
    cout << "a" << "\n";
  }
  else {
    cout << "0" << "\n";
  }
}

/*
  ＃メモ
  chocdaiが全てあるか調べる
  hの前にcが何個あるか
  2分木探索

  前の文字に何個あるか，その前に何個あるかのプログラムをどうすれば良いか分からなかった。
*/


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/