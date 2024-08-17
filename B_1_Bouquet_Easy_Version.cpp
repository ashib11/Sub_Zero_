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
    ll n, m;
    cin >> n >> m;
    map<ll, ll> mp;
    set<ll> st;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        st.insert(x);
        mp[x]++;
    }
    vector<ll> v;
    for (auto it : st)
    {
        v.push_back(it);
    }
    sort(allr(v));
    ll ans = 0;
    for (int i = 0; i < (int)v.size(); ++i)
    {
        for (int j = 0; j <= mp[v[i]]; ++j)
        {
            ll cur = 1ll * j * v[i];
            if (cur <= m and mp.count(v[i] - 1))
            {
                ll prt = (m - cur) / (v[i] - 1);
                prt = min(mp[v[i] - 1], prt);
                prt *= (v[i] - 1);
                cur += prt;
                ans = max(ans, cur);
            }
            else if (cur <= m)
                ans = max(ans, cur);
        }
    }
    cout << ans << endl;
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
