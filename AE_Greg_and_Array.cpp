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
const int mx = 1e5 + 10;
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(mx);
    for (int i = 1; i <= n; ++i)
        cin >> v[i];
    vector<pair<pair<ll, ll>, ll>> op(mx + 2);
    for (int i = 1; i <= m; ++i)
        cin >> op[i].first.first >> op[i].first.second >> op[i].second;
    vector<ll> difAr(mx, 0);
    while (k--)
    {
        ll l, r;
        cin >> l >> r;
        difAr[l]++, difAr[r + 1]--;
    }
    for (int i = 1; i <= m; ++i)
        difAr[i] += difAr[i - 1];
    for (int i = 1; i <= m; ++i)
    {
        op[i].second *= difAr[i];
    }
    vector<ll> ans(mx + 2, 0);
    for (int i = 1; i <= m; ++i)
    {
        ll l = op[i].first.first;
        ll r = op[i].first.second;
        ans[l] += op[i].second;
        ans[r + 1] -= op[i].second;
    }
    for (int i = 1; i <= n; ++i)
    {
        ans[i] += ans[i - 1];
        // cout << ans[i] << ' ';
    }
    for (int i = 1; i <= n; ++i)
        cout << v[i] + ans[i] << ' ';
    cout << endl;
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
