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
const int N = 1e5;
vector<int> g[N];
int level[N];
bool vis[N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;

    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();
        for (auto child : g[cur_v])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[cur_v] + 1;
            }
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int u, k;
        cin >> u >> k;
        for (int i = 0; i < k; ++i)
        {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
    }
    bfs(1);
    for (int i = 1; i <= n; ++i)
    {
        if (vis[i] == false)
        {
            cout << i << ' ' << -1 << endl;
        }
        else
            cout << i << ' ' << level[i] << endl;
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
