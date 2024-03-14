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
    int h, m;
    cin >> h >> m;
    int x = h / 10;
    int xr = h % 10;
    int c = m / 10;
    int cr = m % 10;

    if (xr > 5)
    {
        x++;
        xr = 0;
        m = 0;
    }
    else if (x == 2 and c > 3)
    {
        xr++;
        m = 0;
    }
    if (h == 24 and c > 3)
    {
        x = 0, xr = 0;
    }
    cout << x * 10 + xr << " " << m << endl;
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
