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
bool cmp(pair<ll, pair<ll, ll>> &a, pair<ll, pair<ll, ll>> &b)
{
    if (a.second.first != b.second.first)
        return a.second.first > b.second.first;
    else if (a.second.first == b.second.first)
        return a.second.second < b.second.second;

    return a.first < b.first;
}

void solve()
{
    ll n, m, h, rcnt, rpen;
    cin >> n >> m >> h;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll ara[m];
        for (ll &i : ara)
            cin >> i;
        sort(ara, ara + m);
        for (ll i = 1; i < m; i++)
            ara[i] += ara[i - 1];
        ll cnt = 0, pen = 0;
        for (ll i = 0; i < m; i++)
        {
            if (ara[i] <= h)
            {
                cnt = i + 1;
                pen += ara[i];
            }
        }
        if (i == 0)
        {
            rcnt = cnt;
            rpen = pen;
        }
        v.push_back({cnt, pen});
    }
    sort(v.begin(), v.end(), cmp);
    for (ll i = 0; i < v.size(); i++)
    {
        if (v[i].first == rcnt && v[i].second == rpen)
        {
            cout << i + 1 << endl;
            return;
        }
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
        // cout << endl;
    }
    return 0;
}