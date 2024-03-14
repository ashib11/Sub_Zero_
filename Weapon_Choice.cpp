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
    ll h, x, y1, y2, k;
    cin >> h >> x >> y1 >> y2 >> k;
    ll rs = (h / x);
    if (h % x)
        rs++;
    ll rs2 = 0;
    if (((double)h / y1) > k)
    {
        rs2 = k;
        h -= (y1 * k);
        rs2 += (h / y2);
        if (h % y2)
            rs2++;
    }
    else
    {
        rs2 = h / y1;
        if (h % y1)
            rs2++;
    }
    cout << min(rs, rs2) << endl;
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
