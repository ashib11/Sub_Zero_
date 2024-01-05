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
bool func(vector<ll> &v, ll mid, ll k)
{
    int n = v.size();
    ll cnt = 0;
    for (int i = n / 2; i < n; ++i)
    {
        if (v[i] < mid)
            cnt += (mid-v[i]);
    }
    return cnt <= k;
}
void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    sort(all(v));
    ll l = 0, r = 3e9, ans = -1;
    while (r >= l)
    {
        ll mid = (l + r) / 2;
        if (func(v, mid, k))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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
