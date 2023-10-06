#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
#define p_b push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define getln(s) geline(cin, s)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    cout << fixed << setprecision(10);
    for (int i = 1; i <= tc; ++i)
    {
        double v1, v2, v3, a1, a2;
        cin >> v1 >> v2 >> v3 >> a1 >> a2;
        double t1, t2, d;
        t1 = (v1) / a1;
        t2 = (v2) / a2;
        double t = max(t1, t2);
        d = t * v3 ;
        double total_d = (v1 * t1) + (v2 * t2) - 0.5 * ((a1 * t1 * t1) + (a2 * t2 * t2));
        cout << "Case " << i << ": "<< total_d << " " << d << endl;
    }
    return 0;
}