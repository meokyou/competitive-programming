#include <algorithm>
#include <array>
#include <iostream>
#include <string>
using namespace std;

void f() {
  int n;
  string s;
  cin >> n >> s;

  array<int, 26> a{};
  for (char x : s)
  a[x - 'a']++;

  array<int, 26> b{};
  int u{0};
  for (char x : s) {
    a[x - 'a']--;
    b[x - 'a']++;
    int v{0};
    for (int i{0}; i < 26; i++)
    v += min(1, a[i]) + min(1, b[i]);
    u = max(u, v);
  }
  cout << u << '\n';
  return;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  f();
}