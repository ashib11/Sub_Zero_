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
    int x, y;
    cin >> x >> y;
    bool arr[n+1][m+1] = {false};
    cout << x << ' ' << y << endl;
    arr[x][y] = true;
    for (int i = 1; i <= m; ++i)
    {
        if (!arr[x][i])
            cout << x << ' ' << i << endl;
        arr[x][i] = true;
    }
    for (int i = m; i >= 1; --i)
    {
        if (i % 2)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (!arr[j][i])
                {
                    cout << j << ' ' << i << endl;
                    arr[j][i] = true;
                }
            }
        }
        else
        {
            for (int j = n; j >=1; --j)
            {
                if (!arr[j][i])
                {
                    cout << j << ' ' << i << endl;
                    arr[j][i] = true;
                }
            }
        }
    }
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
