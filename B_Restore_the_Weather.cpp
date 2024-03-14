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

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> va;
    vector<ll> vb(n);
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        va.push_back({x, i});
    }
    sort(all(va));
    for (int i = 0; i < n; ++i)
    {
        cin >> vb[i];
    }
    sort(all(vb));
    vector<ll> ans(n);
    for (int i = 0; i < n; ++i)
    {
        ans[va[i].second] = vb[i];
    }
    for (int i = 0; i < n; ++i)
        cout << ans[i] << " ";
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
