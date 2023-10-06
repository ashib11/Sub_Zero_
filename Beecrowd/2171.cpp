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
    while (cin >> n && n !=0)
    {
        int j =0; 
        for (int i = 1; j+i <=n; i++)
        {
           j+=i; 
        }
        cout << j << " " << n - j << "\n" ; 
    }
    
    return 0;
}