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
    int n;
    cin >> n;
    ll sum = 0;
    ll cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        if (x == 1)
            cnt++;
        else
            sum += x;
    }
    if (n == 1)
        cout << "NO" << endl;
    else if (sum - cnt - (n - cnt) >= 0)
        cout << "YES" << endl;

    else
        cout << "NO " << endl;
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