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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i)
        cin >> v[i];
    if (n == 1)
    {
        cout << 1 << endl;
        cout << v[0] << endl;
        return;
    }
    vector<ll> ans;
    ans.push_back(v[0]);
    for (int i = 1; i < n; ++i)
    {
        if (v[i - 1] > v[i])
        {
            ans.push_back(min(v[i - 1] - 1, v[i]));
            ans.push_back(v[i]);
        }
        else
            ans.push_back(v[i]);
    }
    cout << ans.size() << endl;
    for (auto it : ans)
        cout << it << ' ';
    cout << endl;
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