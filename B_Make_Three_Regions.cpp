#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;

#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void bfs(vector<string> &g, vector<vector<bool>> &vis, int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = true;
    while (!q.empty())
    {
        auto [a, b] = q.front();
        q.pop();
        for (int k = 0; k < 4; ++k)
        {
            int x = a + dx[k];
            int y = b + dy[k];

            if (x >= 0 and x < 2 and y >= 0 and y < g[0].size())
            {
                if (!vis[x][y] and g[x][y] == '.')
                {
                    vis[x][y] = true;
                    q.push({x, y});
                }
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<string> g(2);
    for (int i = 0; i < 2; ++i)
        cin >> g[i];

    ll cur = 0;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (g[i][j] == '.')
            {
                g[i][j] = 'x';
                int cnt = 0;
                vector<vector<bool>> vis(2, vector<bool>(g[0].size(), false));
                for (int p = 0; p < 2; ++p)
                {
                    for (int q = 0; q < g[0].size(); ++q)
                    {
                        if (g[p][q] == '.' and !vis[p][q])
                        {
                            bfs(g, vis, p, q);
                            ++cnt;
                        }
                    }
                }
                if (cnt == 3)
                {
                    cur++;
                }
                g[i][j] = '.';
            }
        }
    }
    cout << cur << endl;
}

int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
