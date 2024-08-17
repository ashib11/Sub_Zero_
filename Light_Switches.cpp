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
bool valid(ll val, vector<ll> &v, ll k)
{
    for (int i = 0; i < v.size(); ++i)
    {
        ll yo = val - v[i];
        ll seg = yo / k;
        if (seg % 2)
            return false;
        ll mn = (seg * k) + v[i];
        ll mx = ((seg + 1) * k) + v[i];
        if (val < mn and val > mx)
            return false;
    }
    return true;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    sort(all(v));
    for (int i = 0; i <= k; ++i)
    {
        bool possble = valid((v.back() + i), v, k);
        if (possble)
        {
            cout << v.back() + i << endl;
            return;
        }
    }
    cout << -1 << endl;
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
