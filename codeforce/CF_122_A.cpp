#include<iostream>
using namespace std;
int main()
{
int n; 
cin >> n; 
if ( (n%4==0) || (n%7==0)||(n%44==0) || (n%444==0) || (n%77==0)||(n%777==0)||(n%47==0) || (n%74==0)||(n%477==0)||(n%744==0))
{
   cout << "YES\n"; 
}
else cout << "NO\n"; 
return 0;
}
