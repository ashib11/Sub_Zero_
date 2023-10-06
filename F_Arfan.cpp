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
    int n, m;
    cin >> n >> m;
    vector<pair<double, int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        v[i].first = (x * 1.0 / y * 1.0);
        v[i].second = x;
    }
    sort(all(v));
    double ans = 0;
    ans = (double)m * v[0].first;
    cout << setprecision(9) << ans << endl;
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