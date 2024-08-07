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
int n, m, csum = 0;
std::vector<int> cat(N);
vector<bool> vis(N);
int ans =0; 
void dfs(int s, int sum)
{
    if (sum > m)
        return;
    vis[s] = true;
    for (auto child : g[s])
    {
        if (vis[child] == false)
        {
            if (cat[child])
                dfs(child, sum + 1);
            else
                dfs(child, 0);
        }
    }
    if(s!=1 and g[s].size()==1) ans++; 
}

void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> cat[i];
    }
    for (int i = 1; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1, cat[1]);
    cout << ans << endl; 
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
