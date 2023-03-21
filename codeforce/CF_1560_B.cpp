#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc; 
cin >> tc; 
while(tc--) {
    int a,b,c;
    cin >> a >> b >> c; 
    int d = abs(a-b) * 2; 
    if (a>d || b > d || c >d)
    {
        cout << -1 << endl; 
    }
    else {
        if(c<=d/2) cout << c+d/2 << endl; 
        else cout <<  c - d/2 << endl; 
    }
    
}
return 0;
}