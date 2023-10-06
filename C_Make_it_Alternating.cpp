#include <iostream>
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
const ll mod = 998244353;
void solve()
{
    string a;
    cin >> a;
    ll cnt = 1;
    ll sz = -1;
    for (ll i = 0; i < a.size() - 1; ++i)
    {
        if (a[i] == a[i + 1])
            cnt++;
        else
        {
            sz = max(cnt, sz);
            cnt = 1;
        }
    }

    sz = max(cnt, sz);

    cout << sz - 1 << " ";
    ll ans = 1;
    for (ll i = 0; i <= (sz - 1); ++i)
    {
        ans = (ans % mod) * (sz % mod);
        ans %= mod;
        --sz;
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
