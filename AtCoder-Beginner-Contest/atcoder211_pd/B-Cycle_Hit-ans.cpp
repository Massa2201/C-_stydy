#include <bits/stdc++.h>
using namespace std;

int main () {
  vector<string> s(4);
  for (int i = 0;i < 4; i++) {
    cin >> s.at(i);
  }

  vector<string> t = {"H", "2B", "3B","HR"};
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());

  if (s == t) cout << "Yes" << endl;
  else cout << "No" << endl;

}