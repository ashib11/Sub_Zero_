#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int a, b;
    cin >> a >> b;
    if (b > a)
    {
        cout << "impossible" << endl;
        return;
    }
    else {
        int x = (a+b); 
        int y = (a-b);
        if(x%2==0 && y%2==0) cout << x/2 <<" " << y/2 << endl; 
        else cout << "impossible" << endl; 
    }
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}