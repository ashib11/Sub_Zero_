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
ll f(ll x)
{
    if (x == 0)
        return 0;
    return x % 10 + f(x / 10);
}

int main()
{
    fastIO();
    long long x;
    while (cin >> x)
    {
        if (x == 0)
            break;
        
        cout << f(f(f(x))) << endl;
    }

    return 0;
}