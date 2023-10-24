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
int arr[105];
int dp[105][100*505];
int func(int index, int sz, int dif1, int dif2)
{
    if (index == sz)
        return abs(dif1 - dif2);
    if (dp[index][dif1] != -1)
        return dp[index][dif1];
    ll a = func(index + 1, sz, dif1 + arr[index], dif2);
    ll b = func(index + 1, sz, dif1, dif2 + arr[index]);
    int ans = min(a, b);
    return dp[index][dif1] = ans;
}
void solve()
{
    int n_coins;
    cin >> n_coins;
    for (int i = 0; i < n_coins; ++i)
    {
        cin >> arr[i];
    }
    memset(dp, -1, sizeof(dp)); 
    cout << func(0,n_coins, 0, 0) << endl; 
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
