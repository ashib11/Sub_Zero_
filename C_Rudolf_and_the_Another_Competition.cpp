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
bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
    if (a.first.first == b.first.first)
    {
        return a.first.second < b.first.second;
    }
    return a.first.first > b.first.first;
}
void solve()
{
    ll n, m, h;
    cin >> n >> m >> h;
    vector<pair<pair<ll, ll>, ll>> vp;
    for (int j = 1; j <= n; ++j)
    {
        vector<ll> v;
        for (int i = 0; i < m; ++i)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll cur = 0, solv = 0, pt = 0;
        sort(all(v));
        bool yo = true;
        for (int i = 0; i < m; ++i)
        {
            if (cur + v[i] <= h)
            {
                cur += v[i];
                pt += cur;
                solv++;
            }
            else
            {
                vp.push_back({{solv, pt}, j});
                yo = false;
                break;
            }
        }
        if (yo)
            vp.push_back({{solv, pt}, j});
    }
    sort(all(vp), cmp);
    for (int i = 0; i < n; ++i)
    {
        // cout << vp[i].first.first << ' ' << vp[i].first.second << ' ' << vp[i].second << endl; 
        if (vp[i].second == 1)
        {
            cout << i + 1 << endl;
            return;
        }
    }
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
