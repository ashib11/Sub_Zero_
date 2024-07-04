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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first < b.first;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> y(m), p(m);
    map<int, int> mp;
    vector<pair<int, int>> vp;
    vp.push_back({0, 0});
    for (int i = 0; i < m; ++i)
    {
        cin >> p[i] >> y[i];
        vp.push_back({p[i], y[i]});
    }
    sort(all(vp), cmp);
    int k = 0;
    for (int i = 1; i <= m; ++i)
    {
        if (vp[i].first != vp[i - 1].first)
        {
             k = 1;
        }
        else
            ++k;
        mp[vp[i].second] = k;
    }
    for (int i = 0; i < m; ++i)
    {
        cout << setfill('0') << setw(6) << p[i];
        cout << setfill('0') << setw(6) << mp[y[i]] << endl;
    }
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
