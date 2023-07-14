#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    map<int, int> mp;
    ll ans = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        x -= i;
        // cout  << "x " << x ; 
        ans += mp[x]; 
        // cout  << " ans " << ans << endl;  
        mp[x]++;
    }
    cout << ans << endl ;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}