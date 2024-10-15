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
    ll sum = 0;
    vector<int> v(n);
    vector<ll> pre(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        pre[i + 1] += pre[i] + v[i];
    }
    ll ans = 1;
    for (int i = 1; i < n; ++i)
    {
        ll lft = pre[i];
        ll right = pre[n] - lft;
        ans = max(ans, gcd(right, lft));
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
