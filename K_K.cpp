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
    ll hudai; 
    ll n;
    cin >> n;
    ll l = 0, r = 3e9, ans = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (mid * (mid + 1) / 2 <= (n + 1))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << n - ans + 1 << endl; 
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
