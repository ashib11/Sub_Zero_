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
    int x, y, k;
    cin >> x >> y >> k;
    ll sum1 = 0, sum2 = 0;
    vector<pair<ll, ll>> ans;
    for (int i = 1; i < k; ++i)
    {
        ans.push_back({x + i, (y + i)});
        sum1 += (x + i);
        sum2 += (y + i);
    }
    int val = abs(sum1 - x*k);
    int val1 = abs(sum2 - y*k);
    if (sum1 + val != x*k)
        val *= -1;
    if (sum2 + val1 != y*k)
        val1 *= -1;

    ans.push_back({val, val1});
    int p = 0, q = 0;
    for (auto [a, b] : ans)
    {
        // cout << a << ' ' << b << endl;
        p += a, q += b;
    }
    cout << p/k  << ' ' << q/k << endl;
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
