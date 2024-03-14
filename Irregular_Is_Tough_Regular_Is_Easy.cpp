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
// n*(n-1)*(n-2)*(n-3)/24 -> odd
// find_by_order();
// order_of_key();

void solve()
{
    ll n;
    cin >> n;
    ll ans = n * (n - 1) * (n - 2) * (n - 3) / 24;
    cout << ans << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    int k = 1;
    while (tc--)
    {
        cout << "Case " << k << ": ";
        solve();
        k++;
    }
    return 0;
}
