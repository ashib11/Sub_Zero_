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
const int mod = 1e9 + 7;
ll bxp(ll b, ll p)
{
    ll ans = 1;
    while (p)
    {
        if (p % 2)
        {
            ans = (ans * b) % mod;
            --p;
        }
        else
        {
            b = (b * b) % mod;
            p /= 2;
        }
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> pre(n + 1, 0);
    for (auto &i : v)
        cin >> i;
    for (int i = 1; i <= n; ++i)
    {
        pre[i] = pre[i - 1] + v[i - 1];
    }
    ll val = pre[n];
    ll p = 0;
    for (int i = 1; i <= n; ++i)
    {
        val = (val - v[i - 1]);
        if (val < 0)
            val += mod;
        val %= mod;
        ll tot = (val * v[i - 1]) % mod;
        p = (p + tot) % mod;
    }
    ll optn = (n * (n - 1) / 2) % mod;
    ll q = bxp(optn, mod - 2);
    ll ans = (p * q) % mod;
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
