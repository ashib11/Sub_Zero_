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
const int N = 220;
vector<int> g[N];
vector<bool> vis(N);
vector<int> color(N);
void dfs(int ver, int Pcolor)
{
    vis[ver] = true;
    color[ver] = Pcolor;
    for (auto child : g[ver])
    {
        if (vis[child] == false)
        {
            dfs(child, 1 - Pcolor);
        }
    }
}
int main()
{
    fastIO();
    int n;
    while (cin >> n and n != 0)
    {
        int l;
        cin >> l;
        for (int i = 0; i < n; ++i)
        {
            g[i].clear();
            vis[i] = false;
            color[i] = -1;
        }
        for (int i = 0; i < l; ++i)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        for (int i = 0; i < n; ++i)
        {
            if (!vis[i])
                dfs(i, 0);
        }
        bool chck = false;
        for (int i = 0; i < N; ++i)
        {
            for (auto it : g[i])
            {
                if (color[i] == color[it])
                {
                    chck = true;
                    break;
                }
            }
        }
        if (chck)
        {
            cout << "NOT BICOLORABLE." << endl;
        }
        else
            cout << "BICOLORABLE." << endl;
    }
    return 0;
}
