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
const int N = 3e4 + 10;
vector<bool> vis(N);
vector<ll> ans(N);
vector<pair<int, int>> g[N];
int mx = -1, duree;
void dfs(int p, ll dis)
{
    vis[p] = true;
    ans[p] = dis;
    if (mx < ans[p])
    {
        mx = ans[p];
        duree = p;
    }
    for (auto child : g[p])
    {
        if (!vis[child.first])
        {
            dfs(child.first, dis + child.second);
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; ++i)
    {
        int u, v, val;
        cin >> u >> v >> val;
        g[u].push_back({v, val});
        g[v].push_back({u, val});
    }
    dfs(0, 0);
    vis.assign(n, false);
    dfs(duree, 0);
    cout << mx << endl;
    ans.resize(n, 0);
    for (int i = 0; i < N; ++i)
    {
        g[i].clear();
        vis[i] = false;
    }
    mx = -1;
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}
