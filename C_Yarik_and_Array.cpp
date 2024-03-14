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
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    if (n == 1)
    {
        cout << v[0] << endl;
        return;
    }
    ll ans = -1*LONG_LONG_MAX;
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        // cout << ans << endl;
        sum += v[i];
        ans = max(ans, sum);
        if (abs(v[i + 1] % 2) == abs(v[i] % 2) and i < n || sum < 0)
        {
            sum = 0;
        }
    }
    cout << ans << endl;
}

int main()
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
