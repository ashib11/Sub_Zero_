#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int n;
    cin >> n;
    int a = n / 2;
    int b = n / 2 + n % 2;
    if (n % 2 == 0)
    {
        cout << a << " " << b << endl;
        return;
    }
    else
    {
        int x = n ; 
        int y = n ; 
        cout << (x - 1 )/ 2 << " " <<( y + 1 )/ 2 << endl;
    }
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}