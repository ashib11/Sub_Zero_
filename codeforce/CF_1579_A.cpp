#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc; 
cin >> tc; 
while(tc--) {
    string x; 
    cin >> x; 
    int a,b,c; 
    a=b=c=0; 
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i]=='A')
        {
           a++; 
        }
        else if(x[i]=='B') b++; 
        else c++; 
    }
    a+c == b? printf("YES\n") : printf("NO\n"); 
}
return 0;
}