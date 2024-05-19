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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3
bool chck(double a, double b, double c, double mid)
{
    double val = (a * mid) + (b * sin(mid));
    return val <= c;
}
void solve()
{
    double a, b, c;
    cin >> a >> b >> c;
    double l = 0, h = 1e9;
    while (h - l > 1e-6)
    {
        double mid = (l + h) / 2;
        if (chck(a, b, c, mid))
        {
            l = mid;
        }
        else
            h = mid;
    }
    cout << fixed << setprecision(6) << h << endl;
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
