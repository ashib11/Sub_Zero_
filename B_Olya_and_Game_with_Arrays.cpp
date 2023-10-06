#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> ans;
    ll mn = 1e9 + 10;
    for (ll i = 0; i < n; ++i)
    {
        ll m;
        cin >> m;
        vector<ll> v(m);
        for (ll j = 0; j < m; ++j)
        {
            cin >> v[j];
        }
        sort(all(v));
        ans.push_back({v[1], v[0]});
        mn = min(v[0], mn);
    }
    sort(all(ans));

    ll sum = mn;
    for (int i =  ans.size() - 1; i > 0; --i)
    {
        sum += ans[i].first;
    }
    cout << sum << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}