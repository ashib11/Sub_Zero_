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
    ll pos;
    cin >> pos;
    sort(all(v));
    if (pos <= v[1] and pos >= v[0])
    {
        ll m = (v[1]+v[0])/2; 
        ll a = m-v[0]; 
        ll b = v[1]-m; 
        ll dis = min(a, b);

        cout << dis << endl; 
    }
    else if (pos > v[1])
    {
        ll dis = n - v[1];
        cout << dis << endl; 
    }
    else if (pos < v[0])
    {
        ll dis = v[0] - 1;
        cout << dis << endl; 
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
