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
const int N = 1e5;
ll dp[100][N];
ll arr[N];
ll cnt[N];
ll func(int indx, int target)
{
    if (indx < 0)
        return 0;
    if (target == 0)
        return 1;
    ll &yo = dp[indx][target];
    if (~yo)
        return yo;
    yo = func(indx - 1, target);
    ll ans = 0;
    for (int i = 1; i <= cnt[indx]; ++i)
    {
        if (arr[indx] <= target)
            ans = func(indx, target - arr[indx]);
    }
    return yo += ans;
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    memset(arr, -1, sizeof(arr));
    memset(cnt, -1, sizeof(cnt));
    int n, target;
    cin >> n >> target;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    for (int i = 0; i < n; ++i)
        cin >> cnt[i];
    ll ans = 0;
    ans = func(n - 1, target);
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
