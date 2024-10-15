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
    void fun(vector<int> candi, int target, int indx)
    {
        if (target == 0)
        {
            ans.push_back(cur);
            return;
        }
        for (int i = indx; i < candi.size(); ++i)
        {

            if (i > indx and candi[i] == candi[i - 1])
                continue;
            if (candi[i] > target)
                break;
            cur.push_back(candi[i]);
            fun(candi, target - candi[i], i + 1);
            cur.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
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
