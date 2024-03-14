#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
#define int long long 
#define ll __int128
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
    int n, p;
    cin >> n >> p;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].second;
    }
    for (int i = 0; i < n; ++i)
    {

        int x;
        cin >> x;
        v[i].first = min(x, p);
    }
    sort(all(v));
    ll ans = p;
    ll rem = n - 1;

    for (int i = 0; i < n; ++i)
    {
        if (rem <= 0)
            break;

        ans += min(v[i].second, rem) * v[i].first;
        rem -= min(v[i].second, rem);
    }
    cout << ans << endl;
}

int32_t main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
