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
    for (int i = 1; i <= tc; ++i)
    {
        long long a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        cout << fixed << setprecision(8);
        cout << "Case " << i << ": ";
        double OA = sqrt(((a - c) * (a - c)) + ((b - d) * (b - d)));
        double OB = sqrt(((a - e) * (a - e)) + ((b - f) * (b - f)));
        double AB = sqrt(((c - e) * (c - e)) + ((d - f) * (d - f)));
        double theta = acos((((OA * OA) + (OB * OB) - (AB * AB))) / (2 * OA * OB));
        double s = OA * theta;
        cout << s << endl;
    }
    return 0;
}