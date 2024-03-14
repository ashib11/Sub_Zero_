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
int fun(vector<ll> &v, int mid, int t)
{
    ll sum = 0;
    for (int i = 0; i < (int)v.size(); ++i)
    {
        sum += (v[i] / mid);
    }
    return sum >= t;
}
void solve()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    ll l = 0, r = n, ans = -1;
    cout << (l + r) / 2 << endl;
    while (r >= l)
    {
        int mid = (l + r) / 2;

        if (fun(v, mid, t))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << l << endl;
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
