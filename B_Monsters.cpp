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
bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v;
    bool chck = false;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        if (x >= k)
            chck = true;

        x = x % k;
        if (x == 0)
            x = INT_MAX;
        v.push_back({x, i + 1});
    }

    // if (!chck)
    // {
    //     for (int i = 0; i < n; ++i)
    //     {
    //         v[i].first = INT_MIN;
    //     }
    // }
    sort(v.begin(), v.end(), cmp);
    for (auto it : v)
        cout << it.second << " ";
    cout << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}