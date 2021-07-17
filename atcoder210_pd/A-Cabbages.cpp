#include<bits/stdc++.h>
using namespace std;

int main() {
  long long n, a, x, y;
  cin >> n >> a >> x >> y;

  long long sum01 = 0, sum02 = 0, all = 0;
  if(n > a) {
    sum01 = a * x;
    sum02 = (n - a) * y;
    all = sum01 + sum02;
  }
  else {
    all = n * x;
  }

  cout << all << "\n";
}