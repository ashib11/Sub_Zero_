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
    double l = 0;
    double h = 2;
    double n;
    cin >> n;
    while (h - l > 1e-9)
    {
        double mid = (h + l) / 2.0;
        if (mid * mid > n)
        {
            h = mid;
        }
        else if (mid * mid < n)
            l = mid;
        else if (n == mid * mid)
        {
            cout << fixed << setprecision(9) << mid << endl;
            return;
        }
    }
    cout << fixed << setprecision(9) << l << endl;
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
