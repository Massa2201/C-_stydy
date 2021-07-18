#include <bits/stdc++.h>
using namespace std;

int main() {

  long long n;
  cin >> n;
  vector<long long> c(n);
  vector<long long> cnt(10 * 10* 10* 10* 10* 10* 10* 10* 10);
  

  for (int i = 0; i < n; i++) {
    cin >> c.at(i);
    
    for (int j = 0; j < c.at(i); j++) {
      vector<vector<long long>> data(n, vector<long long>(c.at(i)));
      cnt.at(j) = j;
    }
  }


}