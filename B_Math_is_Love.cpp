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
bool chck(ll mid, ll y)
{
    ll sum = (mid * (mid + 1));
    return sum <= 2 * y;
}
void solve()
{
    ll y;
    cin >> y;
    ll l = 0, h = 1e6;
    while (h >= l)
    {
        ll mid = (h + l) / 2;
        if (chck(mid, y))
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    if (h * (h + 1) == 2 * y)
        cout << h << endl;
    else
        cout << "NAI" << endl;
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
