#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, avg;
  int sum = 0;
  vector<int> a(N);
  vector<int> ans(N);
  cin >> N;

  for(int i = 0; i < N; i++) {
    cin >> a.at(i);

    sum += a.at(i);
  }
  avg = sum / N;
  
  for(int j = 0; j < N; j++) {
    if(a.at(j) >= avg) {
      ans.at(j) = a.at(j) - avg;
    }
    else {
      ans.at(j) = avg - a.at(j);
    }
  }

  for(int i = 0; i < N; i++) {
    cout << ans.at(i);
  }
}