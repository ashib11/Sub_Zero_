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
ll k, n, a, b;
bool chck(ll mid)
{
    ll mx = a * mid;
    ll hlf = (n - mid) * (b);
    // cout << mid << ' ' << mx << ' ' << hlf << endl;
    return ((mx + hlf)) < k;
}
void solve()
{

    cin >> k >> n >> a >> b;
    ll l = 0, h = 2e9;
    while (h >= l)
    {
        ll mid = (l + h) / 2;
        if (chck(mid))
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout << min(n, h) << endl;
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
