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
    vector<pair<ll, ll>> vp(n);
    vector<ll> axis;
    for (auto &[a, b] : vp)
    {
        cin >> a;
        axis.push_back(a);
    }
    for (auto &[a, b] : vp)
    {
        cin >> b;
    }
    sort(all(vp)), sort(all(axis));
    vector<ll> pre(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        pre[i] = pre[i - 1] + vp[i - 1].second;
    }
    int nq;
    cin >> nq;
    while (nq--)
    {
        ll l, r;
        cin >> l >> r;
        auto it = lower_bound(all(axis), l) - axis.begin();
        auto it1 = upper_bound(all(axis), r) - axis.begin();
        // cout << it << ' ' << it1 << endl;
        ll val = pre[it1] - pre[it];
        cout << val << endl;
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
