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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3
const int mx = 2e5 + 10;
map<ll, ll> mp[mx];
vector<ll> v[mx];
int color[mx];
ll ans;
void dfs(int child, int parent)
{
    for (auto cur_child : v[child])
    {
        if (cur_child == parent)
            continue;
        dfs(cur_child, child);
        if (mp[cur_child].size() > mp[child].size())
        {
            mp[child].swap(mp[cur_child]);
        }
    }
    ans += mp[child][color[child]];
    mp[child][color[child]] = 1;

    for (auto cur_child : mp[child]){
        ans+= cur_child.second*mp[]
    }
}
void solve()
{
    mp->clear();
    memset(color, sizeof(color), 0);
    v->clear();
    ans = 0;

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> color[i];
    for (int i = 1; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1, 0);
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
