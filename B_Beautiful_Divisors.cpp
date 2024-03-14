
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
// bool f(int k){
//     1
// }
void solve()
{
    ll n;
    cin >> n;

    set<ll> div;
    for (int i = 1; i * i <= n; ++i)
    {

        if (n % i == 0)
        {
            div.insert(n / i);
            div.insert(i);
        }
    }

    vector<ll> ans;
    for (int i = 1; i <= 20; ++i)
    {
        ll val = pow(2, i) - 1;
        ll val1 = pow(2, (i - 1));
        ans.push_back(val1 * val);
    }

    ll mx = -1;
    for (auto it : div)
    {
        for (auto x : ans)
        {

            if (it % x == 0)
            {
                mx = max(mx, x);
            }
        }
    }
    cout << mx << endl;
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
