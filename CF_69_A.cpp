#include<iostream>
using namespace std;
int main()
{
int x,y,z,tc,a=0,b=0,c=0; 
cin >> tc; 
for (int i = 1; i <= tc; i++)
{
   cin >> x>> y >> z; 
   a+=x; 
   b+=y; 
   c+=z; 
}
if ((a==0) && b == 0 && c ==0)
{
    cout << "YES\n"; 
}
else {
    cout << "NO\n"; 
}
return 0;
}