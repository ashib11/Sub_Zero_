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
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> pre(n);

    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    pre[0] = v[0];
    for (ll i = 1; i < n; ++i)
    {
        pre[i] = pre[i - 1] + v[i];
        // cout << pre[i] << endl; 
    }
    ll mn = 0;
    ll ans = v[0];
    for (ll i = 0; i < n; ++i)
    {
       
        ans = max(ans, (2 * pre[i]) - v[i] - mn);
        ans = max(ans, pre[i]);
         mn = min(pre[i], mn); 
        // cout << pre[i] << " "; 

    }
    // cout << endl; 
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