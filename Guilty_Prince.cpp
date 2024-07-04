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
int dx[] = {+1, -1, +0, -0};
int dy[] = {+0, -0, +1, -1};
const int N = 100;
vector<vector<bool>> vis(N, vector<bool>(N));
vector<string> v(N);
int ans, w, h;
void dfs(int x, int y)
{
    vis[x][y] = true;
    ans++;
    for (int i = 0; i < 4; ++i)
    {
        int ax = x + dx[i];
        int ay = y + dy[i];
        if (ax >= 0 and ax < h and ay >= 0 and ay < w and v[ax][ay] != '#')
        {
            if (!vis[ax][ay])
            {
                dfs(ax, ay);
            }
        }
    }
}
void solve()
{

    cin >> w >> h;
    v.resize(h);
    vis.assign(h, vector<bool>(w, false));

    for (auto &i : v)
        cin >> i;

    int sx, sy;
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            if (v[i][j] == '@')
            {
                sx = i;
                sy = j;
                break;
            }
        }
    }
    ans = 0;
    dfs(sx, sy);
    cout << ans << endl;
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
