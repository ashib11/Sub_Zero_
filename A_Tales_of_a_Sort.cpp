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
    vector<ll> v(n);
    ll cnt = 0;
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = n - 1; i >  0; --i)
    {
        if (v[i - 1] > v[i])
        {
            cnt = max(cnt, v[i - 1]);
        }
    }
    cout << cnt << endl;
}
int main()
{    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}