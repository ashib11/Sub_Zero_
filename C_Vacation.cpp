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
int n;
int arr[N][3];
int dp[N][3];

int func(int indx, int pos)
{
    if (indx > n)
        return 0;
    if (dp[indx][pos] != -1)
        return dp[indx][pos];
    int ans = 0;
    for (int i = 0; i < 3; ++i)
    {
        if (i == pos)
            continue;
        ans = max(ans, (func(indx + 1, i) + arr[indx][i]));
    }
    return dp[indx][pos] = ans; 
}
void solve()
{

    cin >> n;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> arr[i][j];
            if (i == 0)
                dp[i][j] = arr[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
            ans = max(ans, func(1, i) + arr[2][i]);
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
