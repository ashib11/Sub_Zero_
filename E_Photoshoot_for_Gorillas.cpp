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
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> v(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i + k <= n; ++i)
    {
        for (int j = 0; j + k <= m; ++j)
        {
            v[i][j]++;
            v[i + k][j + k]++;
            v[i + k][j]--;
            v[i][j + k]--;
        }
    }
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            v[i][j] += v[i][j - 1];
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= m; ++j)
        {
            v[i][j] += v[i - 1][j];
        }
    }
    vector<ll> el;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            el.push_back(v[i][j]);
        }
    }
    sort(allr(el));
    int n1;
    cin >> n1;
    vector<ll> yo(n1);
    for (auto &i : yo)

        cin >> i;
    sort(allr(yo));
    ll ans = 0;
    for (int i = 0; i < n1; ++i)
    {
        ans += yo[i] * el[i];
    }
    cout << ans << endl;
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
