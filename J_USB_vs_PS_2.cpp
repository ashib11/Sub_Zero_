#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
// find_by_order();
// order_of_key();
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int m;
    cin >> m;
    ll ans = 0, cnt = 0;
    string x = "USB";
    string y = "PS/2";
    vector<pair<ll, string>> v(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(all(v));
    for (int i = 0; i < m; ++i)
    {
        if (v[i].second == x and a > 0)
        {
            ans += v[i].first;
            ++cnt;
            --a;
        }
        else if (v[i].second == y and b > 0)
        {
            ans += v[i].first;
            --b;
            ++cnt;
        }
        else if ((v[i].second == x || v[i].second == y) and c > 0)
        {
            --c;
            ans += v[i].first;
            ++cnt;
        }
    }
    cout << cnt << " " << ans << endl;
}
int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
