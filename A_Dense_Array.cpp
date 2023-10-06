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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int ans =0; 
    for (int i = 0; i < n-1; ++i)
    {
        int a = max(v[i], v[i + 1]);
        int b = min(v[i], v[i + 1]);
        while (a *2 < b )
        {
                ans ++; 
                a*=2; 
        }
    }
    cout << ans << endl; 
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