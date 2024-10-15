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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        v[i]--;
    }
    string str;
    cin >> str;
    vector<bool> vis(n, false);
    vector<int> ans(n, 0);
    for (int i = 0; i < n; ++i)
    {
        if (!vis[i])
        {
            int black = 0;
            vector<int> tmp;
            int p = i;
            while (!vis[p])
            {
                vis[p] = true;
                tmp.push_back(p);
                if (str[p] == '0')
                    black++;
                p = v[p];
            }
            for (auto it : tmp)
            {
                ans[it] = black;
            }
        }
    }
    for (auto it : ans)
    {
        cout << it << ' ';
    }
    cout << endl;
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
