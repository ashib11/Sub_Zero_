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

bool fun(long long n)
{
    if (n == 1)
    {
        return true;
    }
    if (n % 10 == 0 && fun(n / 10))
    {
        return true;
    }
    if (n % 20 == 0 && fun(n / 20))
    {
        return true;
    }
    return false;
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (fun(n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}