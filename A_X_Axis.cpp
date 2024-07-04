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
int fun(int i, int x, int y, int z)
{
    return (abs(i - x) + abs(i - z) + abs(i - y));
}
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    ll ans = 1e18;
    int val = -1;
    for (int i = 1; i <= 10; ++i)
    {
        ll k = fun(i, x, y, z);
        ans = min(k, ans);
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
