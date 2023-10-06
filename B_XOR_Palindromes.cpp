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
int check(string &a, int cnt)
{
    for (int i = 0; i < a.size() / 2; ++i)
    {
        if (a[i] != a[a.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    ll cnt = 0;
    for (int i = 0; i < n / 2; ++i)
    {
        if (a[i] != a[n - i - 1])
            cnt++;
    }
    string ans(n + 1, '0');
    if (n % 2 == 0)
    {
        for (int i = cnt; i <= n - cnt; i += 2)
        {
            ans[i] = '1';
        }
    }
    else
    {
        for (int i = cnt; i <= n - cnt; ++i)
        {
            ans[i] = '1';
        }
    }
    cout << ans << endl; 
}
int main()
{
    fastIO();
    int tc;
    // tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}