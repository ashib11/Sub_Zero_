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
int func(int val, vector<int> &coin)
{
    if (val == 0)
        return 0;
    int ans = INT_MAX;
    for (int it : coin)
    {
        if (val - it >= 0)
            ans = min(ans, func(val - it, coin) + 1);
    }
    return ans;
}
void solve()
{
    int val;
    cin >> val;
    int n;
    cin >> n;
    vector<int> coin(n);
    for (auto &it : coin)
        cin >> it;
    cout << func(val,coin) << endl;
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
