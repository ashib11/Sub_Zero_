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
        if(n==0) break; 
        int c,v; 
       
        int sum =0; 
       for (int i = 0; i < n; i++)
       {
        cin >> c >> v; 
        sum+= v/2; 
       }
       cout << sum / 2 << "\n" ; 
    }
    
    return 0; 
}