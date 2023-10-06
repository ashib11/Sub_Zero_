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
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    ll l = 0, h = 1e10, ans = 0;
    while (h >= l)
    {
        ll m = (h + l) / 2, sum = 0;
        for (auto i : v)
            if (i < m)
                sum += (m - i);
        if (x >= sum)
        {
            ans = m;
            l = m + 1;
        }
        else
            h = m - 1;
    }
    cout << ans << endl;
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
