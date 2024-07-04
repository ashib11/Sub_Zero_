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
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n + 2, vector<ll>(m + 2, 0));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 1; i <= n; ++i)
    {

        for (int j = 1; j <= m; ++j)
        {
            ll x = -1;
            if (v[i][j] > v[i - 1][j] and v[i][j] > v[i][j - 1] and v[i][j] > v[i + 1][j] and v[i][j] > v[i][j + 1])
            {
                if (i - 1)
                {
                    x = max(x, (v[i - 1][j]));
                }
                if (i + 1 <= n)
                {
                    x = max(x, (v[i + 1][j]));
                }
                if (j - 1)
                {
                    x = max(x, (v[i][j - 1]));
                }
                if (j + 1 <= m)
                {
                    x = max(x, (v[i][j + 1]));
                }
                v[i][j] = x;
            }
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
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
