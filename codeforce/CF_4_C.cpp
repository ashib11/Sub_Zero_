#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  string a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << i << " " << a[i] << endl;
  }

  return 0;
}