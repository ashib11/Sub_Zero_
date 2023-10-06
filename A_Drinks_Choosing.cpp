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
    int n, k;
    cin >> n >> k;
    ll ans = 0;
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (int i = 1; i <= k; ++i)
        if (mp[i] % 2!=0)
        {
            ans++;
        }
    cout << (n - ans / 2)<< endl;
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