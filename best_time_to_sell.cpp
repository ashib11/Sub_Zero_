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
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0;
        int cur_price = prices[0];
        for (int i = 1; i < (int)prices.size(); ++i)
        {
            int dif = prices[i] - cur_price;
            ans = max(ans, dif);
            if (dif < 0)
            {
                cur_price = min(cur_price, prices[i]);
            }
        }
        return ans;
    }
};
void solve()
{
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
