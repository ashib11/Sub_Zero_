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
    int n, x, y, d;
    cin >> n >> x >> y >> d;
    if (x % d == y % d)
    {
        cout << abs(x-y) / d << endl;
        return;
    }
    int ans = 1e9+10;
    if (y % d == 1)
        ans = min(ans, (y - 1 + d - 1) / d + (x - 1 + d - 1) / d);
    if (y % d == n % d)
        ans = min(ans, (n - y + d - 1) / d + (n - x + d - 1) / d);
    if (ans >=1e9)
        ans = -1;

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