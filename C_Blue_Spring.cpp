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
    int n, d, p;
    cin >> n >> d >> p;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(all(v), greater<int>());
    vector<int> pre_s(n + 10);
    for (int i = 1; i <= n; ++i)
    {
        pre_s[i] = pre_s[i - 1] + v[i - 1];
    }
    ll ans = 0;
    int k = 0;
    for (int i = d; i <= n; i += d)
    {
        if (pre_s[i] - k > p)
        {
            cout << pre_s[i] << " ";
            k = pre_s[i] - p ;
            cout << k << endl;
            ans += p;
        }
        else
        {
            k = i;
            break;
        }
    }
    cout << ans << endl;
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}