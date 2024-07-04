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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        if (x <= k and k <= y)
        {
            vp.push_back({x, y});
        }
    }
    if (vp.size() == 0)
    {
        cout << "NO" << endl;
        return;
    }
    vector<int> mp(60, 0);
    for (auto it : vp)
    {
        int x = it.first, y = it.second;
        for (int i = x; i <= y; ++i)
        {
            mp[i]++;
        }
    }
    for (int i = 0; i < 51; ++i)
    {
        if (i != k and mp[k] <= mp[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl; 
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
