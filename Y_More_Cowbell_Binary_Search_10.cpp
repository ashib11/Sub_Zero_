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
// find_by_key();
// value_by_key();
int n_bell, n_bx;
const int N = 1e5 + 10;
vector<int> v(N);
bool bs(ll mid)
{
    int cnt = 0;
    for (int i = 0, j = n_bell - 1; j >= i;)
    {
        if (i == j)
            cnt++, i++, j--;
        else if (v[i] + v[j] <= mid)
            cnt++, i++, j--;
        else
            cnt++, j--;
    }
    if (cnt <= n_bx)
        return true;
    return false;
}
void solve()
{
    cin >> n_bell >> n_bx;
    ll h = 0;
    for (int i = 0; i < n_bell; ++i)
    {
        cin >> v[i];
        h += v[i];
    }
    ll l = v[n_bell-1]; 
    while (h >= l)
    {
        ll mid = (h + l) / 2;
        if (bs(mid))
            h = mid - 1;
        else
            l = mid + 1;
    }
    cout << l << endl;
}
int main()
{
    fastIO();
    int tc;
    // cin >> tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}