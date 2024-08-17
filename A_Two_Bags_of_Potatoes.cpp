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
    ll y, k, n;
    cin >> y >> k >> n;
    if (y >= n)
    {
        cout << "-1" << endl;
        return;
    }
    ll lim = (n / k);
    bool ok = true;
    for (int i = 1; i <= lim; ++i)
    {
        ll cur = (i * k) - y;
        if (cur > 0)
        {
            ok = false;
            cout << cur << ' ';
        }
    }
    if (ok)
        cout << "-1" << endl;
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
