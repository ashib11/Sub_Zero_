#include<bits/stdc++.h>
using namespace std;
int main()
{
char s; 
int n, m; 
cin >> n >> m; 
int flag =0; 
for (int i = 0; i < n*m; i++)
{
    cin >> s; 
    if (s == 'C' || s=='M' || s =='Y')
    {
        flag = 1; 
    }
    
}
if (flag == 1)
{
    cout << "#Color\n"; 
}
else cout << "#Black&White\n"; 
return 0;
}