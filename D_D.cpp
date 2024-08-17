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
    ll n, k;
    cin >> n >> k;
    if (k >= n)
    {
        cout << 1 << endl;
        return;
    }
    set<ll> div;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            div.insert(i);
            div.insert(n / i);
        }
    }
    ll ans = 1e18;
    for (auto it : div)
    {
        if (it <= k)
        {
            ans = min(ans, (n / it));
        }
    }
    cout << ans << endl;
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
