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
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(all(v));
    int ans = 1e5;
    for (int i = 0; i < n; ++i)
    {
        if (v[i].second & 1)
        {
            ans = min(ans, v[i].second / 2 + v[i].first);
        }
        else
            ans = min(ans, v[i].second / 2 - 1 + v[i].first);
    }
    cout << ans << endl; 
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