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
        ll n, m, k;
        cin >> n >> m >> k;
        ll arr[n];
        for (ll i = 0; i < n; ++i)
            cin >> arr[i];
        ll brr[m];
        ll sum = 0;
        for (ll i = 0; i < m; ++i)
            cin >> brr[i];
        for (ll i = 0; i < n; ++i)
        {
            sum += arr[i] * brr[k - i];
        }
        cout << sum << endl;
    }
    return 0;
}