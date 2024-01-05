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
    int n, m;
    cin >> n >> m;
    map<int, int> hb, hg;
    int nb;
    cin >> nb;
    for (int i = 0; i < nb; ++i)
    {
        int x;
        cin >> x;
        hb[x] = 1;
    }
    int ng;
    cin >> ng;
    for (int i = 0; i < ng; ++i)
    {
        int x;
        cin >> x;
        hg[x] = 1;
    }
    for (int i = 1; i <= max(n, m) * 100; ++i)
    {
        int happi = i % n;
        int happihappi = i % m;
        if (hb[happi] || hg[happihappi])
        {
            // cout << i%n << " " <<
            hb[happi] = 1;
            hg[happihappi] = 1;
        }
    }
    ll ans = 0;
    for (auto it : hb)
    {
        ans += it.second;
    }
    for (auto it : hg)
        ans += it.second;
    // cout << ans << endl;
    if (ans == (m + n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
