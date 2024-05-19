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

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> v(n + 1, 0);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    ll overallSum = 0, posSum = 0;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        if (x)
        {
            posSum += v[i];
            v[i] = 0;
        }
    }
    for (int i = 0; i < k; ++i)
        overallSum += v[i];
    ll ans = overallSum;
    for (int i = k; i < n; ++i)
    {
        overallSum += v[i] - v[i - k];
        ans = max(ans, overallSum);
    }
    ans += posSum;
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
