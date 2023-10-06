#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
void dfs(int vertex)
{
    /** Take action on vertex after entering
     * the vertex
     **/
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        /** Take action on child before
         * entering the child node
         * **/
        if (!vis[child])
            dfs(child);
        /** take action on child
         * after exiting child node
         **/
    }
    /** Take action on vertex before
     * exiting the vertex
     **/
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v1);
        g[v2].push_back(v2);
    }
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}