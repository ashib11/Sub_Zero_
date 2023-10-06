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
const int N = 105;
int n, a[N];

int main()
{
    fastIO();
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int ans = 0, cur = 2;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] > cur)
            {
                ans += (a[i] - cur + 4) / 5;
                cur = a[i];
            }
        }
        cout << "Case " << t << ": " << ans << endl; 
    }
    return 0;
}