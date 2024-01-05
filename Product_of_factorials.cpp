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
ll mod = 109546051211;
const int N = 1e7;
vector<ll> v(N);
void preCal()
{
    v[0]=1;
    for (ll i = 1; i < N; ++i)
    {
        v[i] = ((__int128)(v[i - 1] * i)) % mod;
    }
}
void solve()
{
    ll n;
    cin >> n;
    ll ans = 1;
    for (int i = 1; i <= n; ++i)
        ans = ((__int128)ans * v[i]) % mod;
    cout << ans << endl;
}

int main()
{ 
    fastIO();
    preCal();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
