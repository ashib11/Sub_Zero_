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
    vector<vector<int>> ans;
    vector<int> cur; 
    void fun(vector<int> &candi, int target, int indx)
    {
        if (indx >= candi.size())
        {
            if (target == 0)
            {
                ans.push_back(cur);
            }
            return;
        }
        if (candi[indx] <= target)
        {
            cur.push_back(candi[indx]);
            fun(candi, target - candi[indx], indx);
            cur.pop_back();
        }
        fun(candi, target, indx + 1);
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> cur;
        fun(candidates, target, 0);
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
