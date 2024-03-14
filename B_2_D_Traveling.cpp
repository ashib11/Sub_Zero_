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
//(a>>b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3

void solve()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>> vp;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }
    --a, --b;
    ll ans = abs(abs(vp[a].first - vp[b].first) + abs((vp[a].second - vp[b].second)));
    ll mx = 1e18, my = 1e18;
    for (int i = 0; i < k; ++i)
    {
        mx = min(mx, abs((abs(vp[a].first - vp[i].first) + abs(vp[a].second - vp[i].second))));
        my = min(my, abs((abs(vp[b].first - vp[i].first) + abs(vp[b].second - vp[i].second))));
    }
    cout << min(mx + my, ans) << endl;
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
