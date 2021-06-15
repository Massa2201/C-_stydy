#include <bits/stdc++.h>

using namespace std;

int main() {

  string S;
  string answer;
  cin >> S;

  for(int i = 0; i < S.size(); i++) {
    char c = S.at(i);
  
    if(S.at(i) == ' ' ) {
      i++;
      for(; S.at(i) == ' '; i++) {
        
        answer += S.at(i);
      }
    }
  }
    cout << answer << "\n";
}