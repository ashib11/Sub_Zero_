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

void solve()
{
    int n, k;
    cin >> n >> k;
    ll ans = 6;
    if (k == 1 or k == n)
    {
        ans += (n - 2) * 3;
    }
    else
    {
        int dis = k ;
        int dis2 = n - k + 1;
        int val = min(dis, dis2);
        int val2 = max(dis, dis2);
         
        val -= 2;
        val2--; 
        ans += (val) * 3;
        ans += (k - 1);
        ans += (val2 * 3);
    }
    cout << ans << endl;
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
