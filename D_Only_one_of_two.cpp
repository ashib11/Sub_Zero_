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
// find_by_order();
// order_of_key();
ll m, n, k;
bool f(ll mid)
{
    ll x = (mid / n);
    ll y = (mid / m);
    ll lc = (m * n) / __gcd(m, n);
    return x + y - 2 * (mid / lc) >= k;
}
void solve()
{
    cin >> m >> n >> k;
    ll l = 0, h = 1e18;
    ll ans = -1;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (f(mid))
        {
            ans = mid;
            h = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
