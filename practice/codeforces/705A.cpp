#include <bits/stdc++.h>

using namespace std;

const char* l[2] {" that I love", " that I hate"};

int main()
{
  int n;
  cin >> n;
  string s("I hate");
  n = n - 1;
  for (int i{0}; i < n; ++i) {
    s.append(l[i % 2]);
  }
  printf("%s it\n", s.c_str());
  return 0;
}