#include <bits/stdc++.h>
using namespace std;

#define g(x) (x - 48)

inline const bool f(int a, int b) {
  if (a != b) {
    return false;
  }
  else {
    return true;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  int n;
  string s;
  int y; int l; int x{0};
  while (t--) {
    x = 0;
    cin >> n >> s;
    l = s.size() - 1;
    y = ceil(n / 2.0);
    for (int i{0}; i < y; ++i) {
      if (f(g(s.at(i)), g(s.at(l - i)))) {
        x = (l + 1) - (i * 2);
        break;
      }
    }
    cout << x << '\n';
  }
  return 0;
}