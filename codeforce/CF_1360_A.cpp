#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc,a,b; 
cin >> tc; 
for (int i = 0; i < tc; i++)
{
  cin >> a >> b; 
  int ans = min(max(a,2*b),max(2*a,b)); 
  cout << ans*ans << endl; 
}

return 0;
}