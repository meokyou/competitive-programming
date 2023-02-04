#include <bits/stdc++.h>
using namespace std;

void f()
{
  int n;
  cin >> n;

  vector<int> a(n);
  int ne{0};
  long long sum{0};
  for (int i{0}; i < n; ++i)
  {
    cin >> a[i];
    if (a.at(i) < 0) {
      ++ne;
      a[i] = abs(a.at(i));
    }
    sum += a.at(i);
  }

  sort(a.begin(), a.end());
  if (ne & 1)
    sum -= 2 * a.at(0);
  cout << sum << '\n';
}

int main()
{
  int t;
  cin >> t;
  while (t--)
    f();
}