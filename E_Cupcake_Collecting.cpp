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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3
const int N = 1e3 + 15;
int arr[N + 1][N + 1];
int dp[N + 2][N + 2];
int fun(int i, int j, int n)
{
    if (i > n or j > n or arr[i][j] == -1)
        return INT_MIN;
    if (i == n and j == n)
        return 0;
    int &yo = dp[i][j];
    if (yo != -1)
        return yo;
    int x = fun(i + 1, j, n);
    int y = fun(i, j + 1, n);
    yo = max(x, y) + arr[i][j];
    return yo;
}
void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> arr[i][j];
        }
    }
    memset(dp, -1, sizeof(dp));
    ll val = fun(1, 1, n);
    if (val < 0)
        cout << -1 << endl;
    else
        cout << val << endl;
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
