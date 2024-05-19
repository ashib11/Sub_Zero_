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
const int M = 1e9 + 7;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll tsum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        tsum += v[i];
    }
    ll mx = 0, tmp = 0;
    for (int i = 0; i < n; ++i)
    {
        tmp += v[i];
        if (mx < tmp)
            mx = tmp;
        tmp = max(0LL, tmp);
    }
    mx = max(tmp, mx);
    ll ans2 = mx;
    for (int i = 0; i < k; ++i)
    {
        ans2 = (ans2 + ans2) % M;
    }
    ll ex = tsum - mx;
    // cout << ex << ' ' << ans2 << endl;
    cout << ((ans2%M) + M + (ex%M)) % M << endl;
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
