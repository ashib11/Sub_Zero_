#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
const int N = 1e6 + 10;
vector<int> v[N];
bool vis[N];
int dis[N];
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int u, k;
        cin >> u >> k;
        while (k--)
        {
            int vertex;
            cin >> vertex;
            v[u].push_back(vertex);
        }
    }
    queue<int> q;
    q.push(1);
    dis[1] = 0;
    vis[1] = true;
    while (q.size() != 0)
    {
        int x = q.front();
        q.pop();
        for (auto it : v[x])
        {
            if (!vis[it])
            {
                vis[it] = true;
                q.push(it);
                dis[it] = dis[x] + 1;
            }
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i])
            cout << i << " " << -1 << endl;
        else
            cout << i << " "<< dis[i] << endl;
    }
    return 0;
}