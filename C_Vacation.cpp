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
void solve()
{
    int n;
    cin >> n;

    int dp[n][3];
    cin >> dp[0][0] >> dp[0][1] >> dp[0][2];

    for (int i = 1; i < n; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        for (int j = 0; j < 3; ++j)
        {

            if (j == 0)
                dp[i][j] = max(dp[i - 1][j + 1], dp[i - 1][j + 2]) + a;
            else if (j == 1)
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j + 1]) + b;
            else if (j == 2)
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j - 2]) + c;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < 3; ++j)
            ans = max(ans, dp[i][j]);
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
