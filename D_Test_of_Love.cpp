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
const int N = 2e5 + 10;
ll dp[N];
ll yo(int i, int n, int m, int k, string &str)
{
    if (i >= n)
    {
        return 0;
    }
    if (dp[i] != -1)
        return dp[i];
    if (str[i] == 'C')
        return INT_MAX;
    if (str[i] == 'W')
    {
        return dp[i] = 1 + yo(i + 1, n, m, k, str);
    }

    ll mn = INT_MAX;
    for (int j = 1; j <= m; ++j)
    {
        mn = min(mn, yo((i + j), n, m, k, str));
    }
    return dp[i] = mn;
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    ll n, m, k;
    cin >> n >> m >> k;
    string str;
    cin >> str;
    str = "L" + str;
    ++n;
    ll mn = yo(0, n, m, k, str);
    if (mn <= k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
