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
double ds(double &a, double &b, double &c, double &d)
{
    double val = (a - c) * (a - c) + (b - d) * (b - d);
    return sqrt(val);
}
void solve()
{
    double x = 0;
    double px, py;
    cin >> px >> py;
    double ax, ay, bx, by;
    cin >> ax >> ay >> bx >> by;
    double dis = ds(ax, ay, px, py), dis1 = ds(bx, by, px, py), dis2 = ds(ax, ay, bx, by), disOA = ds(ax, ay, x, x), disOB = ds(bx, by, x, x);
    dis2 /= 2.0;
    double r = min(max(dis, disOA), max(dis1, disOB));
    double r1 = max({dis2, disOA, dis1});
    double r2 = max({dis2, disOB, dis});
    r = min({r, r1, r2});
    cout << fixed << setprecision(10) << r << endl;
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
