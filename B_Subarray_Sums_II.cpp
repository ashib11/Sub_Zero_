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
map<ll, ll> mp;
void solve()
{
    mp[0] = 1;
    ll n, target;
    cin >> n >> target;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    vector<ll> pre(n + 1, 0);
    ll cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        pre[i] = pre[i - 1] + v[i - 1];
        ll val = pre[i] - target;
        cnt += mp[val];
        mp[pre[i]]++;
    }
    cout << cnt << endl;
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