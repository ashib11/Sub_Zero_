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
    ll x, y;
    cin >> x >> y;
    ull a, b;
    cin >> a >> b;
    ull ta = 2 * a;
    ull ans = 0;
    if (ta <= b)
    {

        ans = x * a + y * a;
    }
    else
        ans = min(x, y) * b + abs(x - y) * a;
    cout << ans << endl;
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