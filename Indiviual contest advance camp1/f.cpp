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
    while (tc--)
    {
        int arr[1000+10];
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n - 1; i++)
        {
            int h = max(arr[i], arr[i + 1]);
            int l = min(arr[i], arr[i + 1]);

            while ((l * 2) < h)
            {
                ans++;
                l *= 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}