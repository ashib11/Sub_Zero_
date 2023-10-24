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
const int N = 1005;
int w[N], capacity[N];
int func(int indx, int t_w)
{
    int ans = 1;
    for (int i = 0; i < indx; ++i)
    {
        if (t_w + w[i] <= w[indx])
        {
            t_w += w[i];
            ans = max(ans, func(i, t_w) + 1);
        }
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> w[i] >> capacity[i];
    int x = 0;
    for (int i = 0; i < n; ++i)
    {
        x = max(x, func(i, 0));
    }
    cout << x << endl; 
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
