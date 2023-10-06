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
    vector<bool> arr(1e6, false);
    ll sum = 0;
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    for (int i = a; i <= b; ++i)
    {
        arr[i] = true;
    }
    for (int i = c; i <= d; ++i)
    {
        arr[i] = true;
    }
    for (int i = e; i <= f; ++i)
    {
        arr[i] = true;
    }
    for (int i = min({a, b, c, d, e, f}); i <= max({a, b, c, d, e, f}); ++i)
    {
        if (arr[i] == true)
            sum++;
    }
    cout << sum << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        solve();
    }
    return 0;
}