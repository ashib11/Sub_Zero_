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
const int N = 1e4;
int dp[N][N];
string s1, s2;
int lcs(int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    auto &yo = dp[i][j];
    if (~yo)
        return yo;

    int ans = lcs(i - 1, j);
    ans = max(ans, lcs(i, j - 1));
    ans = max(ans, lcs(i - 1, j - 1) + (s1[i] == s2[j]));
    return yo = ans;
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    cin >> s1 >> s2;
    int i = s1.size() - 1;
    int j = s2.size() - 1;
    int ans1 = s2.size() - lcs(i, j);
    int ans2 = s1.size() - lcs(j, i);
    cout << min(ans1, ans2) << endl;
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
