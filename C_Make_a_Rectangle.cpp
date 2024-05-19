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
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        mp[-1 * x]++;
    }
    ll a = 0, b = 0;
    ll ans = 0;
    for (auto it : mp)
    {
        if (it.second > 3)
        {
            ll val = it.first * it.first;
            ans = max(ans, val);
        }
        if (it.second > 1)
        {
            if (a == 0)
            {
                a = it.first;
            }
            else
                b = it.first;
        }
        if (a != 0 and b != 0)
        {
            ans = max(ans, a * b);
            cout << ans << endl;
            return;
        }
    }
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
