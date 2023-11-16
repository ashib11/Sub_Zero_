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
    int n;
    cin >> n;
    vector<int> v(2 * n);
    for (auto &i : v)
        cin >> i;
    sort(all(v));
    vector<pair<int, int>> ans;
    for (int i = 0; i < v.size()/2; ++i)
    {
        ans.push_back({v[i], v[v.size() - i - 1]});
    }
    int l = 0;
    for (int i = 1; i < n; ++i)
    {
        l += abs(ans[i].first - ans[i - 1].first) + abs(ans[i].second - ans[i - 1].second);
    }
    cout << l << endl;
    for (auto it : ans)
    {
        cout << it.first << " " << it.second << endl;
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
