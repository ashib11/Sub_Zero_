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
ll itachi(ll n)
{
    if (n == 1)
        return 1;
    else if (n & 1)
        return itachi(3 * n + 1) + 1;
    else
        return itachi(n / 2) + 1;
}
int main()
{
    fastIO();
    ll a, b;
    while (cin >> a >> b)
    {

        ll cnt, ans = 0;

        for (ll i = min(a, b); i <= max(a, b); ++i)
        {
            cnt = itachi(i);
            ans = max(cnt, ans);
        }
        cout << a << ' ' << b << ' ' << ans << endl;
    }

    return 0;
}