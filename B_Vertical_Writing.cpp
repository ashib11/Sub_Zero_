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
    int n;
    cin >> n;
    vector<string> v(n);
    int mx = -1;
    for (auto &i : v)
    {
        cin >> i;
        mx = max(mx, (int)i.size());
    }

    vector<string> ans(mx, string(n, '*'));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < (int)v[i].size(); ++j)
        {
            ans[j][n - i - 1] = v[i][j];
        }
    }
    for (auto it : ans)
    {
        int lm = it.size();
        for (int i = it.size() - 1; i >= 0; --i)
        {
            if (it[i] != '*')
            {
                lm = i;
                break;
            }
        }
        for (int i = 0; i <= lm; ++i)
        {
            cout << it[i];
        }
        cout << endl;
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
