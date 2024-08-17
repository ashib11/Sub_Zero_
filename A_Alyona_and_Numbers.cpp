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
    int n, m;
    cin >> n >> m;
    ll ans = 0;
    vector<ll> v(6, 0), b(6, 0);
    for (int i = 1; i <= n; ++i)
    {
        int val = i % 5;
        v[val]++;
    }
    for (int i = 1; i <= m; ++i)
    {
        int val = i % 5;
        b[val]++;
    }
    for (int i = 0; i < 5; ++i)
    {

        ans += (v[i]) * b[(5 - i)%5];
    }
    cout << ans << endl;
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
