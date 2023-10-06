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
    int a, b, c;
    cin >> a >> b >> c;
    int x = abs(a - b);
    c *= 2;
    int ans = x / c;
    x %= c;
    if (x)
        ans++;
    cout << ans << endl;
}
int main()
{
    fastIO();
    int tc;
    // tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}