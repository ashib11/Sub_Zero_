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
    ll n;
    cin >> n;
    vector<ll> ps;
    ll mn = -1, mx = 1e9 + 1;
    for (int i = 0; i < n; ++i)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 1)
        {
            mn = max(b, mn);
        }
        else if (a == 2)
        {
            mx = min(b, mx);
        }
        else if (a == 3)
        {
            ps.push_back(b);
        }
    }
    ll ans = mx - mn + 1;
    ps.push_back(1e9 + 1);
    sort(all(ps));
    // cout << mn << " " << mx << endl;
    for (int i = 0; i < ps.size(); ++i)
    {
        if (ps[i] >= mn and ps[i] <= mx)
            ans--;
    }
    cout << max(0LL,ans) << endl;
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
