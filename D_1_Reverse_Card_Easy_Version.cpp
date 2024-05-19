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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3

// ll yo(ll n, ll m)
// {
//     ll ans = 0;
//     for (int a = 1; a <= n; ++a)
//     {
//         ll cur = 0;
//         ll x = 0;
//         for (int b = 1; b <= m; ++b)
//         {
//             if ((a + b) % (b * gcd(a, b)) == 0)
//             {
//                 ans++;
//                 cur = ans; 
//             }
//             cout << b << " " << cur << endl;
//         }
//     }
//     return ans;
// }
void solve()
{
    ll n, m;
    cin >> n >> m;
    // cout << yo(n,m) << endl; 
    ll ans = 0;
    for (int i = 2; i <= m; ++i)
    {
        ll val = (n + i) / i;
        val/=i; 
        // cout << val << ' ' << i << endl;
        ans += val;
    }
    cout << ans + n << endl;
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
