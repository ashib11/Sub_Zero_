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

void solve()
{
    int n, s;
    cin >> n >> s;
    vector<pair<ll, ll>> vp(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> vp[i].first >> vp[i].second;
    }
    sort(all(vp));
    vector<ll> pre(n + 1, 0);
    pre[0] = s;
    for (int i = 1; i <= n; ++i)
        pre[i] = pre[i - 1] + vp[i - 1].first;
    ll ans = 0;
    for (int i = 0; i < n; ++i)
        ans += pre[i + 1] - vp[i].second;

    cout << ans << endl;
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
