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
int dp[2030];
int dp_lds[2030];
int lis(int i, vector<int> &v)
{

    if (dp[i] != -1)
        return dp[i];
    dp[i] = 1;
    for (int j = 0; j < i; ++j)
    {
        if (v[i] > v[j])
        {
            dp[i] = max(dp[i], lis(j, v) + 1);
        }
    }
    return dp[i];
}
int lds(int i, vector<int> &v)
{

    if (dp_lds[i] != -1)
        return dp_lds[i];
    dp_lds[i] = 1;
    for (int j = 0; j < i; ++j)
    {
        if (v[i] < v[j])
        {
            dp_lds[i] = max(dp_lds[i], lis(j, v) + 1);
        }
    }
    return dp_lds[i];
}
void solve()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ans = max(ans, lds(i,v) + lis(i,v) - 1);
    }
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
