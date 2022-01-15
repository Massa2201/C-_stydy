#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  int n, q, s = 0;
  int cnt2 = 0;
  cin >> n;
  cin >> q;
  vector<ll> a(n);
  vector<ll> r(q);
  vector<vector<ll>> x(q, vector<ll>(2));

  for(int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  for(int i = 0; i < q; i++) {
    for(int j = 0; j < 2; j++) {
      cin >> x.at(i).at(j);
    }
  }
  for(int i = 0; i < q; i++) {
    int cnt = 0;
    
    for(int j = 0; j < n; j++) {
      s = x.at(i).at(1);
      if(x.at(i).at(0) == a.at(j)) cnt++;
      if(cnt == s) {
        
        r.at(cnt2) = j + 1;
        cnt2++;
        break;
      }
      if((cnt != s) && j == n - 1) {

        r.at(cnt2) = -1;
        cnt2++;
        break;
      } 
    }
  }

  for(int i = 0; i < q; i++) cout << r.at(i) << endl;

}