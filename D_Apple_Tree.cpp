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
const int N = 2e5 + 3;
vector<ll> g[N];
bool vis[N];
ll cnt[N];
ll dfs(int p)
{

    vis[p] = true;
    bool is_last = true;
    ll cur = 0;
    for (auto ch : g[p])
    {
        if (!vis[ch])
        {
            is_last = false;
            cur += dfs(ch);
        }
    }
    if (is_last)
        cur = 1;
    cnt[p] = cur;
    return cur;
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        g[i].clear();
        vis[i] = false;
        cnt[i] = 0;
    }

    for (int i = 1; i < n; ++i)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    int nq;
    cin >> nq;
    while (nq--)
    {
        int a, b;
        cin >> a >> b;
        ll ans = cnt[a] * cnt[b];
        cout << ans << endl;
    }
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
