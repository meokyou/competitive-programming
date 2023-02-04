#include <bits/stdc++.h>

using namespace std; 

const string s("codeforces");

int main()
{
  int t;
  cin >> t;
  char c;
  while (t--) {
    cin >> c;
    if (s.find(c) != string::npos) {
      cout << "YES" << '\n';
    }
    else {
      cout << "NO" << '\n';
    }
  }
}