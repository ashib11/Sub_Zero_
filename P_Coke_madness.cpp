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
vector<ll> v;
bool chck(ll mid)
{
    ll life = mid;
    for (int i = 0; i < v.size(); ++i)
    {
        life += v[i];
        if (life <= 0)
            return false;
    }
    return true;
}
void solve()
{
    ll n;
    cin >> n;
    v.resize(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    ll l = 1, h = 1e14;
    while (h >= l)
    {
        ll mid = (l + h) / 2;
        if (chck(mid))
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        cout << "Scenario #" << i << ": ";
        solve();
    }
    return 0;
}
