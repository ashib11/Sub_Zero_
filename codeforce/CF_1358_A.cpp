#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; 
cin >> tc; 
while (tc--)
{
    int n,m; 
    cin >> n >> m ; 
    cout << n * m /2 + n*m %2 << endl; 
}

return 0;
}