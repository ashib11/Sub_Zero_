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
ll sum(ll n)
{
    return (n * (n + 1) / 2);
}
void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll cmn = n/lcm(x,y);
    ll add = n / x;
    ll rmv = n / y;
    add -= cmn;
    rmv -= cmn;
    rmv = sum(rmv);
    add = sum(n) - sum(n - add);
    ll ans = add - rmv;

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
