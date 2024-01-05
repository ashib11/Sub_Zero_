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
    ll n, tk;
    cin >> n >> tk;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    ll l = 0, h = 1e11, ans = 0;
    while (h >= l)
    {
        ll mid = (l + h) / 2;
        ll ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] < mid)
                ans += mid - v[i];
        }
        if (ans <= tk)
        {
            l = mid + 1;
        }
        else
            h = mid - 1;
    }
    cout << h << endl;
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
