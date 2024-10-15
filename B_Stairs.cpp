#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
ll nsum(ll x)
{
    return x * (x + 1ll) / 2ll;
}
void solve()
{
    ll x;
    cin >> x;
    ll ans = 0;
    ll cur = 0;
    ll base = 0;
    while (1)
    {
        ll lm = pow(2, base);
        base++;
        cur += nsum(lm+(lm-1));
        if (cur <= x)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
