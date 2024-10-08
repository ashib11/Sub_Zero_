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
map<ll, ll> mp;
const ll mx = 1e5;
void precal()
{
    for (int i = 0; i < mx; ++i)
    {
        mp[i] = i;
    }
    for (int i = 0; i < mx; ++i)
    {
        if (i == 0)
        {
            mp[i] = mp[i] | mp[i + 1];
        }
        else
            mp[i] = (mp[i] | mp[i - 1] | mp[i + 1]);
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    cout << mp[n + m - 1] << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    precal();
    while (tc--)
    {
        solve();
    }
    return 0;
}
