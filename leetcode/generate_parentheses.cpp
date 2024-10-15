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
    vector<string> ans;
    void rec(int op, int cls, string &cur, int n)
    {
        if (op == n and cls == n)
        {

            ans.push_back(cur);
            return;
        }
        if (op < n)
        {
            cur += "(";
            rec(op + 1, cls, cur, n);
            cur.pop_back();
        }
        if (cls < op)
        {
            cur += ")";
            rec(op, cls + 1, cur, n);
            cur.pop_back();
        }
    }
    vector<string> generateParenthesis(int n)
    {
        string cur = "";
        rec(0, 0, cur, n);
        return ans;
    }
};
void solve()
{
    Solution obj;
    vector<string> ans = obj.generateParenthesis(2);
    for (auto it : ans)
    {
        cout << it << endl;
    }
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
