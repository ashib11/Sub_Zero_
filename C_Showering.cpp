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
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<ll, ll>> vp;
    vp.push_back({0, 0});
    for (int i = 0; i < n; ++i)
    {
        ll a, b;
        cin >> a >> b;
        vp.push_back({a, b});
    }
    sort(all(vp));
    ll lst = 0;
    for (int i = 1; i <= n; ++i)
    {
        ll t = vp[i].first - lst;
        lst = max(lst, vp[i].second);
        if (t >= s)
        {
            cout << "YES" << endl;
            return;
        }
    }
 
    if (m - lst >= s)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
