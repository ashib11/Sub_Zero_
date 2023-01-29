#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b;
  cin >> a >> b;

  const string d[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
  int x = max(a, b);

  cout << d[x] << endl;
  return 0;
}