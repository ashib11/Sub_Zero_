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
    int n, k, x;
    cin >> n >> k >> x;
    if (k > x + 1)
    {
        cout << -1 << endl;
        return;
    }
    if (n < k)
    {
        cout << -1 << endl;
        return;
    }

    int a = k - 1;
    ll ans = (a * (a + 1)) / 2;
    int limit = n - k;
    for (int i = 1; i <= limit; ++i)
    {
        if (x == k)
            ans += x - 1;
        else
            ans += x;
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