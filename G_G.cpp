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
ll mod = 998244353;
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = (a * (a + 1) / 2)%mod;
    ans%=mod; 
    ans*=(b * (b+1)/2)%mod; 
    ans%=mod; 
    ans*= (c*(c+1)/ 2)%mod; 
    ans%=mod; 
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