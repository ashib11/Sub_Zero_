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
#define F(i, a, b) for (int i = a; i < b; i++)
#define B(i, b, a) for (int i = b; i >= a; i--)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int d;
    cin >> d;
    for (int i = 1; i <= d; ++i)
    {
        ll n, s;
        ll sum = INT_MIN;
        cin >> n >> s;
        while (n--)
        {
            ll f, t;
            cin >> f >> t;
            if (t <= s)
            {
                sum = max(f, sum);
            }
            else
            {
                ll y = f - t + s;
                sum = max(sum, y);
            }
        }
        cout << "Case #" << i << ": " << sum << endl;
    }
    return 0;
}