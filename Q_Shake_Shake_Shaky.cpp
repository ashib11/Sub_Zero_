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
vector<ll> v;
bool chck(ll mid, ll k, ll n)
{
    ll total = 0;
    for (int i = 0; i < n; ++i)
    {
        total += v[i] / mid;
    }
    return total >= k;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    v.resize(n);
    ll sum = 0;
    for (auto &i : v)
    {
        cin >> i;
        sum += i;
    }
    sort(allr(v));
    ll l = 1, h = 2e9;
    while (h >= l)
    {
        ll mid = (l + h) / 2;
        if (chck(mid, k, n))
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout << h << endl;
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
