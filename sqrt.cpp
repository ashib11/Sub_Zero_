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
int x;
bool f(double mid)
{
    return mid * mid <= x;
}
void solve()
{
    cin >> x;
    double l = 0, r = 1e12, ans = 0;
    while (r - l >= 1e-7)
    {
        double mid = (l + r) / 2;
        if (f(mid))
        {
            ans = mid;
            l = mid;
        }
        else
        {
            r = mid;
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
