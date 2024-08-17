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
const int N = 2e5+10;
vector<int> g[N];
vector<bool> vis(N, false);
vector<int> path;
bool found = false;
void dfs(int p, int target)
{
    vis[p] = true;
    path.push_back(p);

    if (p == target)
    {
        found = true;
        return;
    }
    for (auto child : g[p])
    {

        if (vis[child] == false)
        {

            dfs(child, target);
            if (found)
                return;
        }
    }
    path.pop_back();
}
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    for (int i = 1; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(x, y);
    for (auto it : path)
        cout << it << ' ';
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
