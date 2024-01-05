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
bool posbl(ll x)
{
    if (x >= 0)
    {
        ll res = sqrt(x);
        return res * res == x;
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        sum += x;
    }
    if (posbl(sum))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
