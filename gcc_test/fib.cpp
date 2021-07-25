#include <bits/stdc++.h>
using namespace std;
int N = 101;

int fib(int n) {
  int a[N];
  a[0] = 1;
  a[1] = 1;

  for (int i = 2; i <= n; i++) {
    a[i] = a[i - 1] + a[i - 2];
  }

  return a[n];
}

int main() {
  int n = 29;
  cout << fib(n) << endl;
}