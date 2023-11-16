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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    ll p = 1;
    for (auto &i : v)
    {
        cin >> i;
        p *= i;
    }
    if (p % k == 0)
    {
        cout << 0 << endl;
        return;
    }
    int ans = INT_MAX;
    if (k == 4)
    {
        for (auto it : v)
        {
            ans = min(ans, (k - it % k));
        }
        for (int i=0 ; i < n; ++i)
        {
            v[i] = v[i] % 2;
        }
        sort(all(v));
        ans = min(ans, v[0] + v[1]);
    }
    else
        for (auto it : v)
        {
            it = it % k;
            ans = min(ans, k - it);
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
