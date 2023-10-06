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
    int m;
    cin >> m;
    vector<string> s(3);
    cin >> s[0];
    cin >> s[1];
    cin >> s[2];
    int n = 3;
    int ans = INT_MAX;
    for (int i = 0; i < n * m; ++i)
    {
        for (int j = 0; j < n * m; ++j)
        {
            for (int k = 0; k < n * m; ++k)
            {
                 if (i != j and i != k and j != k and s[0][i % m] == s[1][j % m] && s[1][j % m] == s[2][k % m])
                {
                    ans = min(ans, max({i, j, k}));
                }
            }
            
        }
    }
    if (ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
        cout << ans << endl;
}
int main()
{
    fastIO();
    int tc;
    // cin >> tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}