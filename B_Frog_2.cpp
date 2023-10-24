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
const int N = 1e5 + 10;
int arr[N];
int dp[N];
// find_by_key();
// value_by_key();
int func(int i, int k)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
    {
        return dp[i];
    }
    int cost = INT_MAX;
    for (int j = 1; j <= k; ++j)
    {
        if(i-j>=0)
        cost = min(cost, func(i - j, k) + abs(arr[i] - arr[i - j]));
    }
    return dp[i] = cost;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    memset(dp,-1, sizeof(dp)); 
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << func(n-1, k) << endl; 
}
int main()
{
    fastIO();
    int tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}
