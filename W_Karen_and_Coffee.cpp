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
const int N = 3e5 + 10;
void solve()
{
    int n, k, nq;
    cin >> n >> k >> nq;
    vector<ll> v(N, 0);
    for (int i = 1; i <= n; ++i)
    {
        ll l, r;
        cin >> l >> r;
        v[l] += 1, v[r + 1] -= 1;
    }
    for (int i = 1; i <= N; ++i)
    {
        v[i] += v[i - 1];
    }
    for (int i = 1; i <= N; ++i)
    {
        if (v[i] >= k)
            v[i] = 1;
        else
            v[i] = 0;
    }
    for (int i = 1; i <= N; ++i)
    {
        v[i] += v[i - 1];
    }
    while (nq--)
    {
        ll l, r;
        cin >> l >> r;
        cout << v[r] - v[l - 1] << endl;
    }
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
