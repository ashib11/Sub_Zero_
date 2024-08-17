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
vector<vector<int>> subsets(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> subsets;
    for (int mask = 0; mask < (1 << n); ++mask)
    {
        vector<int> tmp;
        for (int i = 0; i < n; ++i)
        {
            if (mask & (1 << i))
            {
                tmp.push_back(nums[i]);
            }
        }
        subsets.push_back(tmp);
    }
    return subsets;
}
void solve()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    auto gen_sub = subsets(v);
    int cnt = 0;
    for (auto it : gen_sub)
    {
        if (it.size())
        {
            int mn = *min_element(all(it));
            int mx = *max_element(all(it));
            int s = accumulate(all(it), 0);
            if (s >= l and s <= r and mx - mn >= x)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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
