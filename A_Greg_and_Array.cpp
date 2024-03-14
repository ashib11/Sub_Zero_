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
const int N = 1e5 + 10;
vector<ll> op(N);
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    vector<ll> dif(n, v[0]);
    for (int i = 1; i < n; ++i)
    {
        dif[i] = dif[i - 1] + v[i];
    }
    vector<ll> l(m), r(m), x(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> l[i] >> r[i] >> x[i];
    }

    while (k--)
    {
        ll lft, rgt;
        cin >> lft >> rgt;
        op[lft]++;
        op[rgt + 1]--;
    }
    for (int i = 1; i < m; ++i){
        op[i]  += op[i-1]
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
