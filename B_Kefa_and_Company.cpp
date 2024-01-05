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
// find_by_order();
// order_of_key();
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return b.second > a.second;
}
void solve()
{
    ll n, d;
    cin >> n >> d;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    vector<pair<ll, ll>> vp;
    for (ll i = 0; i < n; ++i)
    {
        ll x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }
    sort(all(vp), cmp);
    for (auto it : vp)
    {
        cout << it.first << " " << it.second << endl;
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
