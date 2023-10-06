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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2 && a + b > 0 || y1 == y2 && c + d > 0 || x - a + b < x1 || x - a + b > x2 || y - c + d < y1 || y - c + d > y2)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
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