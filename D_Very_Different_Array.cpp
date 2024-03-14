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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    sort(all(a)), sort(all(b));
    ll sum = 0;
    for (ll i = 0; i < n; ++i)
    {
        sum += abs(a[i] - b[n - i - 1]);
    }
    ll mx = sum;
    for (ll i = 0; i < n; ++i)
    {
        sum -= abs(a[i] - b[n - 1 - i]);
        sum += abs(b[m - 1 - i] - a[i]);
        mx = max(mx, sum);
    }
    cout << mx << endl;
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
