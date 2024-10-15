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
ll sum(ll n, ll a, ll d)
{
    return n * (2 * a + (n - 1) * d) / 2;
}
void solve()
{
    ll n, k;
    cin >> n >> k;

    ll l = k;
    ll h = k + n - 1;

    ll left = l, right = h;
    ll ans = l;
    ll mn = LLONG_MAX;

    while (left <= right)
    {
        ll mid = (left + right) / 2;
        ll pos = sum(mid - l + 1, l, 1);
        ll neg = sum(h - mid, mid + 1, 1);
        ll cur = abs(pos - neg);

        if (cur < mn)
        {
            mn = cur;
            ans = mid;
        }

        if (pos <= neg)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << mn << endl;
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
