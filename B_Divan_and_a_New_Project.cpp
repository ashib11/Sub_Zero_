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
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        vp.push_back({x, i});
    }
    sort(allr(vp));
    int x = -1, y = 1;
    vector<int> ans(n + 1, 0);
    ll cost = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2)
        {
            ans[vp[i - 1].second] = x--;
        }
        else
        {
            ans[vp[i - 1].second] = y++;
        }
        cost += abs(2 * ans[vp[i - 1].second] * vp[i - 1].first);
    }
    cout << cost << endl;
    
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
