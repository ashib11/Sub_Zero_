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
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    ll a, b;
    cin >> a >> b;
    for (int i = 1; i < n; ++i)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(allr(v));
    for (auto it : v)
    {
        if (it.first >= a)
        {
            if (it.second >= b)
            {
                cout << -1 << endl;
                return; 
            }
        }
    }
    cout << a << endl; 
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
