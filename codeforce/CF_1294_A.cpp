#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc; 
cin >> tc; 
while(tc--) {
     int a,b,c,n; 
     cin >> a >> b >> c >> n; 
    n-= max(a, max(b,c))-a +max(a, max(b,c))-b +  max(a, max(b,c))-c; 
     if ((n%3==0) && (n>=0) )
     {
        cout << "YES\n" ;
     }
     else cout << "NO\n"; 
}
return 0;
}