#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;

#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

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
    for (auto &[i, j] : vp)
        cin >> i >> j;
    
    ll sl = 0, sr = 0;
    vector<ll> ans(n);
    
    for (int i = 0; i < n; ++i)
    {
        ans[i] = vp[i].first;
        sl += vp[i].first;
        sr += vp[i].second;
    }
    
    if (sl > 0 || sr < 0)
    {
        cout << "No" << endl;
        return;
    }

    ll cur = sl;
    for (int i = 0; i < n; ++i)
    {
        if (cur == 0)
            break;
        ll need = min(vp[i].second - vp[i].first, -cur);
        ans[i] += need;
        cur += need;
    }
    
    if (cur != 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        for (auto it : ans)
            cout << it << ' ';
        cout << endl;
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
