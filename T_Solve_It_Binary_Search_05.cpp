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
const double e = 1e-6;
double func(double x, double p, double q, double r, double s, double t, double u)
{
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}
int main()
{
    fastIO();
    double p, q, r, s, t, u;
    while (cin >> p >> q >> r >> s >> t >> u)
    {
        double l = 0;
        double h = 1;
        double mid;
        double l_ans = func(l, p, q, r, s, t, u);
        double h_ans = func(h, p, q, r, s, t, u);
        if (fabs(l_ans) <= e)
        {
            cout << fixed << setprecision(4) << l << endl;
        }
        else if (fabs(h_ans) <= e)
        {
            cout << fixed << setprecision(4) << h << endl;
        }
        else
        {
            bool chk = false;
            while (h - l > 1e-9)
            {
                mid = (l + h) / 2;
                double ans = func(mid, p, q, r, s, t, u);
                if (fabs(ans) <= e)
                {
                    chk = true;
                    break;
                }
                else if (ans < 0)
                {
                    h = mid;
                }
                else
                    l = mid;
            }
            if(chk) cout << fixed << setprecision (4) << mid << endl; 
            else cout << "No solution" << endl; 
        }
    }

    return 0;
}
