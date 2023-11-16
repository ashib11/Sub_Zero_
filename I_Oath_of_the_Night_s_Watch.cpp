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
    int n;
    cin >> n;
    ordered_set<ll> s;
    vector<ll> v;

    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        s.insert(x);
    }
    ll mx = *max_element(all(v));
    ll mn = *min_element(all(v));
    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        if (v[i] > mn and v[i] < mx)
            cnt++;
        // ll a = s.order_of_key(v[i]);
        // ll b = *upper_bound(all(v), v[i]);
        // if (a and v[i] < b)
        //     cnt++;
    }
    cout << cnt << endl;
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
