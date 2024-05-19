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
ll n;
vector<pair<ll, ll>> v;
void solve()
{
    cin >> n;
    v.resize(n);
    for (auto &[a, b] : v)
        cin >> a >> b;
    sort(allr(v));
    ll cur = v[0].first;
    ll curh = v[0].second;
    ll mx = curh - cur;
    for (int i = 1; i < n; ++i)
    {
        cur += v[i].first;
        mx = max((v[i].second - v[i].first), mx);
    }
    cout << cur+mx << endl;
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
