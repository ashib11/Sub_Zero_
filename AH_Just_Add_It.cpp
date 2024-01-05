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
ll mod = 1e9 + 7;
ll bxp(ll b, ll p)
{
    ll ans = 1;
    while (p)
    {
        if (p % 2)
        {
            ans *= b;
            ans %= mod;
            --p;
        }
        else
        {
            b *= b;
            b %= mod;
            p /= 2;
        }
    }
    return ans;
}
void solve()
{
    ll n, k;
    while (cin >> n >> k and n and k)
    {
        ll ans = bxp(n, k);
        ans += bxp(n, n);
        ans += bxp(n - 1, k);
        ans += bxp(n - 1, n);
        ans -= 2 * bxp(n - 2, k);
        ans -= 2 * bxp(n - 2, n);
        cout << ans %mod<< endl;
    }
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
