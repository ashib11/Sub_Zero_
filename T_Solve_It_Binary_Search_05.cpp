#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int p, q, r, s, t, u;
double f(double x)
{
    double ans = (p * exp(-x)) + (q * sin(x)) + (r * cos(x)) + (s * tan(x)) + (t * (x * x)) + u;
    return ans;
}
int main()
{
    fastIO();

    while (cin >> p >> q >> r >> s >> t >> u)
    {

        double f1 = f(0.7071);
        cout << f1 << " " << endl;
        // while(h>=l) {
        //     double mid = (h + l) / 2;
        //     x = mid;
        //     if(ans ==0)
        // }
    }
    return 0;
}