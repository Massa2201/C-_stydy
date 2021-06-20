#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C;
  cin >> A >> B >> C;

  int mi, ma;

  mi = min(min(A, B), C);
  ma = max(max(A, B), C);

  cout << ma - mi << "\n";
}