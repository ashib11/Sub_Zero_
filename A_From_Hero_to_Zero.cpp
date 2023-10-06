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
    ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    while (1)
    {
        if (n % k == 0)
        {
            n /= k;
            cnt++;
        }
        else
        {
            cnt += n % k;
            n -= n % k;
            
        }
        if (n == 0)
        {
            cout << cnt << endl;
            return;
        }
    }
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