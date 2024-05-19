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
    int n, q;
    cin >> n >> q;
    vector<ll> v(n + 4, 0);
    for (int i = 1; i <= n; ++i)
        cin >> v[i];
    vector<ll> dif(n + 4, 0);
    while (q--)
    {
        ll l, r, val;
        cin >> l >> r >> val;
        dif[l] += val;
        dif[r + 1] -= val;
    }

    for (int i = 1; i <= n; ++i)
    {
        dif[i] += dif[i - 1];
        v[i] += dif[i];
        cout << v[i] << ' ';
    }
    cout << endl;
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
