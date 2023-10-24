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
// find_by_key();
// value_by_key();
const int N = 1e5 + 10;
int h[N];
int dp[N];
int func(int i)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];

    int cost = INT_MAX;
    cost = min(cost, func(i - 1) + abs(h[i] - h[i - 1]));
    if (i > 1)
        cost = min(cost, func(i - 2) + abs(h[i] - h[i - 2]));
    return dp[i] = cost;
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> h[i];
    cout << func(n - 1) << endl;
}
int main()
{
    fastIO();
    memset(dp, -1, sizeof(dp));
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
