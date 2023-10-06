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

void solve()
{
    int bun, p, f;
    cin >> bun >> p >> f;
    int pp, pf;
    cin >> pp >> pf;
    vector<pair<int, int>> v;
    v.push_back({pp, p});
    v.push_back({pf, f});
    sort(v.begin(), v.end());
    bun /= 2;
    ll ans = 0;
    while (bun > 0 && (v[1].second > 0 || v[0].second > 0))
    {
        if (v[1].second > 0)
        {
            bun--;
            v[1].second--;
            ans += v[1].first;
        }
        else if (v[0].second > 0)
        {
            bun--;
            v[0].second--;
            ans += v[0].first;
        }
    }

    cout << ans << endl;
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