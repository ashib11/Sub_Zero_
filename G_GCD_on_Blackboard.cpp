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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3
const int N = 1e5 + 10;
vector<ll> pre(N + 1), suf(N + 1);
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    pre[1] = v[0], suf[n] = v[n - 1];
    ll mx = -1;
    for (int i = 2; i <= n; ++i)
    {
        pre[i] = __gcd(pre[i - 1], v[i - 1]);
        suf[n - i + 1] = __gcd(suf[n - i + 2], v[n - i]);
    }
    ll ans = -1;
    for (int i = 0; i <= n; ++i)
    {
        ans = max(ans, gcd(pre[i], suf[i + 2]));
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
