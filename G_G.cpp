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
    ll n, x, y;
    cin >> n >> x >> y;
    ll red = 1, blue = 0;
    for (int i = n; i > 1; --i)
    {
        blue += x * red;
        red += blue;
        blue *= y;
    }
    cout << blue << endl;
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