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
vector<char> g[N];
vector<bool> vis(N);
int cnt;
void dfs(char a)
{
    vis[a] = true;
    for (auto child : g[a])
    {
        if (!vis[child])
        {
            dfs(child);
        }
    }
}
void solve()
{
    string str;
    char mx;
    while (getline(cin, str) and str.size())
    {
        if (str.size() == 1)
        {
            mx = str[0];
        }
        else
        {
            g[str[0]].push_back(str[1]);
            g[str[1]].push_back(str[0]);
        }
    }
    for (char i = 'A'; i <= mx; ++i)
    {
        if (!vis[i])
        {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    cin.ignore();
    cin.ignore();
    while (tc--)
    {
        for (int i = 0; i < N; ++i)
        {
            g[i].clear();
        }
        vis.assign(N, false);
        cnt = 0;
        solve();
        if (tc)
            cout << endl;
    }
    return 0;
}
