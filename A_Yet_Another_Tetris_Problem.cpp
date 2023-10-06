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
    bool od = 0, ev = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x & 1)
            od = 1;
        else
            ev = 1;
    }
    if(od+ev == 2) cout << "NO" << endl; 
    else cout << "YES" << endl; 
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