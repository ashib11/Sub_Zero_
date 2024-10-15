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
    vector<vector<int>> ans;
    vector<int> cur;
    void fun(vector<int> &nums, vector<bool> &taken)
    {
        if (cur.size() == nums.size())
        {
            ans.push_back(cur);
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (taken[i] == false)
            {
                cur.push_back(nums[i]);
                taken[i] = true;
                fun(nums, taken);
                taken[i] = false; 
                cur.pop_back(); 
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<bool> taken(nums.size() + 2, false);
        fun(nums, taken);
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
