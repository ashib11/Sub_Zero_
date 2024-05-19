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
    ll n, h;
    cin >> n >> h;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    sort(allr(v));
    ll l = 1, r = h;
    while (r >= l)
    {
        ll mx_dmg = (l + r) / 2;
        ll hf_dmg = ((mx_dmg + 1) / 2);
        ll cur_dmg = (v[0] * hf_dmg )+ ((mx_dmg - hf_dmg) * v[1]);
        if (cur_dmg >= h)
        {
            r = mx_dmg - 1;
        }
        else
            l = mx_dmg + 1;
    }
    cout << l << endl; 
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
