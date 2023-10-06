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

double angle(double a, double b, double c)
{
    return acos((b * b + c * c - a * a) / (2 * b * c));
}
double area(double a, double angle)
{
    return 0.5 * a * a * angle;
}
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    cout << fixed << setprecision(10);
    int test_case;
    cin >> test_case;
    for (int i = 1; i <= test_case; ++i)
    {
        cout << "Case " << i << ": ";
        double a, b, c;
        cin >> a >> b >> c;
        double x = a + c;
        double y = a + b;
        double z = b + c;
        double s = (x + y + z) / 2.0;
        double T_area = sqrt(s * (s - x) * (s - y) * (s - z));
        double a1 = area(a, angle(z, x, y));
        double b1 = area(b, angle(x, z, y));
        double c1 = area(c, angle(y, x, z));
        cout << T_area - a1 - b1 - c1 << endl;
    }
    return 0;
}