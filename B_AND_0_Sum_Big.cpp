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
const ll mod = 1e9 + 7;
ll bxp(ll b, ll p)
{
    ll ans = 1;
    while (p)
    {
        if (p % 2)
        {
            ans *= b;
            ans%=mod; 
            --p;
        }
        else
        {
            b *= b;
            b%=mod; 
            p /= 2;
        }
    }
    return ans;
} 
void solve()
{
    ll n,k;
    cin >> n >> k; 
    cout << bxp(n,k) << endl; 
}

int main()
{
    fastIO();

    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        solve();
    }
    return 0;
}