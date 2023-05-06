#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
#define p_b push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define getln(s) geline(cin, s)
#define F(i, a, b) for (int i = a; i < b; i++)
#define B(i, b, a) for (int i = b; i >= a; i--)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first == b.first)
        return (a.second > b.second);
    return (a.first < b.first);
}
int main()
{
    fastIO();

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        vector<pair<ll, ll>> v;
        int n;
        cin >> n;
        while (n--)
        {
            ll x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end(), cmp);
        for (auto it : v)
        {
            cout << it.first << " " << it.second << endl;
        }
    }

    return 0;
}