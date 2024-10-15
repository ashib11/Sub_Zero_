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
    vector<pair<int, int>> vp;
    map<int, vector<int>> mp;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        vp.push_back({x, i});
        mp[x].push_back(i);
    }
    for (auto [a, b] : mp)
    {
        if (b.size() == n)
        {
            cout << "NO" << endl;
            return;
        }
    }
    sort(all(vp));
    cout << "YES" << endl;
    auto it = mp.begin();
    auto sz = it->second.size();
    for (int i = sz; i < n; ++i)
    {
        cout << it->second.front() << ' ' << vp[i].second << endl;
    }
    for (int i = 1; i < mp[it->first].size(); ++i)
    {
        cout << mp[it->first][i] << ' ' << vp[sz].second << endl;
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
