#include<bits/stdc++.h>
using namespace std;

void min_and_max(int a, int b, int c, int &mini, int &maxi) {
  mini = min(a, min(b, c));
  maxi = max(a, max(b, c));
}

int main() {
  int mini, maxi;
  min_and_max(3, 1, 4, mini, maxi);
    cout << mini << endl;
    cout << maxi << endl;
} 