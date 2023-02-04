#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  int n;
  string s;
  auto p = pair{0, 0};
  bool y;
  while (t--) {
    y = false;
    p = {0, 0};
    cin >> n;
    cin >> s;
    for (auto x : s) {
      switch (x) {
      case 'U':
        p.second++;
        break;
      case 'D':
        p.second--;
        break;
      case 'L':
        p.first--;
        break;
      case 'R':
        p.first++;
        break;
      }
      if (p == pair{1, 1}) {
        cout << "YES" << '\n';
        y = true;
        break;
      }
    }
    if (y != true) {
      cout << "NO" << '\n';
    }
  }
}