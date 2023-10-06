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
// #define endl "\n"
#define getln(s) geline(cin, s)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
long long fun(long long n)
{
    if (n == 1)
        return 1;
    else if (n % 2 == 0)
        return fun(n / 2) + 1;
    else
        return fun(3 * n + 1) + 1;
}
int main()
{
    fastIO();
    long long x, y;
    while (cin >> x >> y)
    {
        long long a = x;
        long long b = y;
        if (x > y)
            swap(x, y);
        long long cycle, max = 0;

        for (; x <= y; x++)
        {
            cycle = fun(x);
            if (cycle > max)
                max = cycle;
        }
        cout << a << ' ' << b << ' ' << max << endl;
    }

    return 0;
}