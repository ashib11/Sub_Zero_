#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  map<string, int> v;
  while (n--)
  {
    string s;
    cin >> s;
    if (v[s] == 0)
    {
      cout << "OK\n";
    }
    else
      cout << s << v[s] << "\n";
    v[s]++;
  }

  return 0;
}