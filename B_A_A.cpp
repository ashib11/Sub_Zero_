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
void solve()
{
    int N = 100;
    ull n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    for (int i = 2; i <= N; ++i)
    {
        ll k = n;
        ll cnt = 0;
        while (k % i == 0)
        {
            cnt++;
            k /= i;
        }
        // cout << i << " " << cnt << endl;
        if (k == 1 and cnt == i)
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
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
