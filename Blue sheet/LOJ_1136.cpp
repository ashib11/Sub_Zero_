#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long lon
#define i_mn INT_MIN
#define i_mx INT_MAX
#define p_b push_back
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
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
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        int x, y;
        cin >> x >> y;
        ll sum = 0;
        int count = 0;
        for (int j = x; j <= y; ++j)
        {
            sum += j;
            if (sum % 3 == 0)
                count++;
        }
        cout << "Case " << i << ": "<< count << endl;
    }
    return 0;
}

