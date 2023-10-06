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
    int n, h, x;
    cin >> n >> h >> x;
    int ans;
    bool c = false;

    for (int i = 1; i <= n; ++i)
    {
        int a;
        cin >> a;
        if (a >= (abs(h - x)) && c == false)
        {
            
            ans = i;
            c = true; 
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