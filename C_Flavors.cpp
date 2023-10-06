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
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; ++i)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({y, x});
    }
    v.push_back({0ll, 0ll});
    sort(all(v));
    reverse(all(v));
    ll ans = v[0].first;
    ll sum;
    if (v[0].second == v[1].second)
    {
        ll x = (v[1].first) / 2;
        sum = x; 
        for (int i = 2; i < n; ++i)
        {
            if (v[i].second != v[1].second)
            {
                if (v[i].first > x)
                {
                    x = v[i].first;
                    sum = x;
                }
            }
        }
    }
    else
        sum = v[1].first;
    cout << ans + sum << endl;
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