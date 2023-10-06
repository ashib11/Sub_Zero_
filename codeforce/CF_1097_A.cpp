#include<bits/stdc++.h>
using namespace std;
int main()
{
string a; 
cin >> a; 
string b; 
int flag=0; 
for (int i = 0; i <5; i++)
{
   cin >> b; 
   if(b[0]==a[0]||b[0]==a[1] || b[1]==a[0] || b[1]==a[1]) flag =1; 
}
flag==0? cout << "NO\n" : cout << "YES\n" ; 
return 0;
}