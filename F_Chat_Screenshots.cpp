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


void dfs(int x, bool vis[], vector<int> g[])
{
    vis[x] = true;
    for (auto it : g[x])
    {
        if (!vis[it])
            dfs(it, vis[], g[]);
    }
}
void solve()
{
    int n, k;
    cin >> n >> k;
    bool vis[n + 10, false];
    vector<int> g[n + 10,0];
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        g[i].push_back(x);
        g[x].push_back(i);
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i])
        {
            ans++;
            dfs(i);
        }
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
