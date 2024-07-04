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
const int N = 1e5 + 3;
vector<int> g[N];
vector<bool> vis;
vector<int> col;
bool dfs1(int p, int sex)
{
    vis[p] = true;
    col[p] = sex;
    for (auto child : g[p])
    {

        if (!vis[child])
        {
            if (sex == 0)
            {
                if (dfs1(child, 1) == false)
                    return false;
            }
            else
            {
                if (dfs1(child, 0) == false)
                    return false;
            }
        }
        else
        {
            if (col[child] == col[p])
            {
                return false;
            }
        }
    }
    return true;
}
void solve()
{
    int n, actn;
    cin >> n >> actn;
    vis.assign(n + 2, false);
    col.resize(n + 2, 0);
    for (int i = 0; i < N; ++i)
        g[i].clear();
    for (int i = 0; i < actn; ++i)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i])
        {
            if (dfs1(i, 1) == false)
            {
                cout << "Suspicious bugs found!" << endl;
                return;
            }
        }
    }
    cout << "No suspicious bugs found!" << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        cout << "Scenario #" << i << ":" << endl;
        solve();
    }
    return 0;
}
