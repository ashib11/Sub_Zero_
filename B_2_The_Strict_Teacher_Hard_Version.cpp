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
    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> v(m);
    for (auto &i : v)
        cin >> i;
    sort(all(v));
    while (q--)
    {
        ll pos;
        cin >> pos;
        ll x = *lower_bound(all(v), pos);
        if (x == pos)
        {
            cout << 0 << endl;
        }
        else if (pos > v[m - 1])
        {
            cout << n - v[m - 1] << endl;
        }
        else if (pos < v[0])
        {
            cout << v[0] - 1 << endl;
            
        }
        else
        {
            ll l = 0, r = m - 1;
            ll lb;
            while (r >= l)
            {
                ll mid = (r + l) / 2;
                if (v[mid] >= pos)
                {
                    r = mid - 1;
                }
                else
                {
                    lb = mid;
                    l = mid + 1;
                }
            }
            auto up = upper_bound(all(v), pos) - v.begin();
            ll mid = (v[up] + v[lb]) / 2;
            // cout << mid << " mid " << endl;
            ll a = mid - v[lb];
            ll b = v[up] - mid;
            ll dis = min(a, b);

            cout << dis << endl;
        }
    }
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