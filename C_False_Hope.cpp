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
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    sort(all(v));
    vector<pair<ll, ll>> ans;
    ans.push_back({v[0], v[0]});
    int k = 0;
    for (int i = 1; i < n; ++i)
    {
        if ((v[i] - v[i - 1]) > 1)
        {
            ans[k].second = v[i - 1];
            k++;
            ans.push_back({v[i], v[i]});
        }
    }
    ans[k].second = v[n - 1];
    cout << ans.size() << endl;
    for (auto it : ans)
    {
        if (it.first == it.second)
            cout << it.first << endl;
        else
            cout << it.first << "->" << it.second << endl;
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