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
void solve()
{
    int m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;
    int ans;
    if (k * ak + a1 >= m && (m % k) <= a1 && (m / k <= ak))
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        m -= k * ak;
        int y = m % k;
        int tmp;
        if (y <= a1)
        {
            while (1)
            {
                m--;
                a1--;
                if (m % 3 == 0)
                    tmp = m;
                if (a1 <=0)
                    break;
            }
            ans = tmp / k;
        }
        else
        {
            ans = m / k;
            ans += (m % k);
        }
    }
    cout << ans << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}