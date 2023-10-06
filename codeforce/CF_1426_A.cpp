#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc; 
cin >> tc; 
while (tc--)
{
   int n,x; 
   cin >> n >> x; 
   if (n == 1 || n == 2)
   {
    cout << 1 << endl; 
   }
   else {
   int ans = ceil((n-2)/ (x*1.0)); 
   cout << ans + 1  << endl;
   }
}

return 0;
}