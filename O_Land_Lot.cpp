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

void solve()
{
    ll n, m;
    cin >> n >> m;
    int arr[n + 1][m + 1] = {0};
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> arr[i][j];

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            arr[i][j] += arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1];

    ll a, b;
    cin >> a >> b;
    ll ans = 1e8;
    for (int i = a; i <= n; ++i)
    {
        for (int j = b; j <= m; ++j)
        {

            ll val = arr[i][j] - arr[i - a][j] - arr[i][j - b] + arr[i - a][j - b];
            ans = min(ans, val);
        }
    }
    for (int i = b; i <= n; ++i)
    {
        for (int j = a; j <= m; ++j)
        {
            ll val = arr[i][j] - arr[i - b][j] - arr[i][j - a] + arr[i - b][j - a];
            ans = min(ans, val);
        }
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
