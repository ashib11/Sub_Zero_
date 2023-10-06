#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n; 
    while (1)
    {
        cin >> n; 
        int sum =0; 
        if(n==0) break; 
        string a;  
        cin >> a ;
        for (int  i = 0; i <n; i++)
        {
           if(a[i] == 'D') sum+=1; 
           else if(a[i]=='E') sum-=1; 
        }
        sum=sum%4; 
        if(sum == 1 || sum == -3) cout << "L\n" ; 
        else if(sum == 2 || sum == -2) cout << "S\n" ; 
        else if(sum == 3 || sum == -1) cout << "O\n" ; 
        else cout << "N\n"; 
    }
    
    return 0;
}