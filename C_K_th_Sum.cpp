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
const int N = 1e5 + 9;
ll a[N], b[N], n, k;
// ll get_cnt(ll lagbe)
// {
//     ll l = 1, r = n, ans = 0;
//     while (l <= r)
//     {
//         ll mid = (l + r) / 2;
//         if (b[mid] <= lagbe) --> upper_bound
//         {
//             ans = mid;
//             l = mid + 1;
//         }
//         else
//             r = mid - 1;
//     }
//     return ans;
// }
bool func(int mid)
{
    ll cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        ll lagbe = mid - a[i];
        cnt += upper_bound(b + 1, b + n + 1, lagbe) - b - 1;
    }
    return cnt >= k;
}
void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        cin >> b[i];
    sort(a + 1, a + n + 1), sort(b + 1, b + n + 1);
    int l = 0, r = 2e9, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (func(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
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
