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
    ll n, q;
    cin >> n >> q;
    vector<ll> pre(n + 1, 0);
    vector<ll> el(n);
    for (int i = 1; i <= n; ++i)
    {
        ll h;
        cin >> h;
        el[i - 1] = h;
        pre[i] = pre[i - 1] + h;
    }

    for (int i = 1; i < n; ++i)
        el[i] = max(el[i], el[i - 1]);
    while (q--)
    {
        ll k;
        cin >> k;
        ll indx = upper_bound(all(el), k) - el.begin();
        cout << pre[indx] << ' ';
    }
    cout << endl;
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
