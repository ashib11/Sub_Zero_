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
const int N = 1e5;
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n + 2, 0);
    for (int i = 1; i <= n; ++i)
        cin >> v[i];
    sort(allr(v));
    vector<ll> dif(n + 2, 0);
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        dif[l]++, dif[r + 1]--;
    }
    for (int i = 1; i <= n; ++i)
    {
        dif[i] += dif[i - 1];
    }
    sort(allr(dif)); 
    ll asum =0;
    for (int i = 0; i < n; ++i)
        asum+= v[i]*dif[i]; 
    cout << asum << endl; 
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
