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
    vector<int> v(n);
    bool check = false;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (v[i])
            check = true;
    }
    int ans = 0;
    
    for (int i = 0; i < n; ++i)
    {
        if (v[i]>=v[k-1] && v[i]>0)
        {
            // cout << v[i] << " "; 
            ans++;
        }
    }
    if (check)
        cout << ans << endl;
    else
        cout << 0 << endl;
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