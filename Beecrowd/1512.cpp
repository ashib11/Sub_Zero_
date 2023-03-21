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
    int n,a,b; 
    while (cin >> n >> a >> b && n!=0)
    {
        int lcm = (a*b)/__gcd(a,b); 
        int ans = (n/a) + n/b - n/lcm; 
        cout << ans << endl; 
    }
    
    return 0;
}   