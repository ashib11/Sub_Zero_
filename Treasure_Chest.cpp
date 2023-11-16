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
    int x, y, k;
    cin >> x >> y >> k;
    int ans = k;
    if (x == y)
    {
        cout << x << endl;
        return;
    }
    if (x == 0 and y == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (y < x)
    {
        cout << x << endl;
        return;
    }
    else if (x < y and x + k >= y)
    {
        cout << y << endl;
        return;
    }
    else
    {
        ans += x;
        int a = abs(y - ans) * 2;
        ans += a;
        cout << ans << endl;
        return;
    }
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
