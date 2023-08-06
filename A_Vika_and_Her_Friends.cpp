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
bool check(int x1, int y1, int x2, int y2)
{
    return abs(x1 + y1)%2 == abs(x2 + y2)%2;
}

void solve()
{
    bool tl = 0, tr = 0, dl = 0, dr = 0;
    int n, m, k;
    cin >> n >> m >> k;
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    string ans = "YES\n"; 
    for (int i = 0; i < k; ++i)
    {
        int a, b;
        cin >> a >> b;
        if (check(x, y, a, b))
        {
            
           ans = "NO\n"; 
        }
    }
    cout << ans ; 
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