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
    int n, m;
    ll k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    sort(all(a));
    sort(all(b));

    ll ans = 0;
    for (int i = 1; i < a.size(); ++i)
    {
        ans += a[i];
    }
    ans += max(b[m - 1], a[0]);
    if (k % 2 == 0)
    {
        ans -= max(b[m - 1], a[n - 1]);
        ans += min(b[0], a[0]);
    }

    cout << ans << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
