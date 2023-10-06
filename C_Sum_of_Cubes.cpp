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
set<ll> pre;
void preCal(ll &x)
{
    for (ll i = 1; i * i * i <= x; ++i)
    {
        pre.insert(i * i * i);
    }
}
void solve()
{
    ll x;
    cin >> x;
    preCal(x);
    for (ll i = 1; i * i * i <= x; ++i)
    {
        if (pre.count(x - i * i * i))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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