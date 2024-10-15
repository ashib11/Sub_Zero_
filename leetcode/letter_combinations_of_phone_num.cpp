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
    map<int, string> mp = {{2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"}, {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}};
    void all_cmb(int indx, string &dig, string &cur_string)
    {
        if (indx == dig.size())
        {
            ans.push_back(cur_string);
            return;
        }
        int x = dig[indx] - '0';
        for (auto it : mp[x])
        {
            cur_string += it;
            all_cmb(indx + 1, dig, cur_string);
            cur_string.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        if(digits.size()==0) return ans; 
        string cur_string =""; 
        all_cmb(0, digits, cur_string); 
        return ans; 
    }
};
void solve()
{
    Solution obj; 
    string dig = ""; 
    vector<string> ans = obj.letterCombinations(dig); 
    for(auto it : ans){
        cout << it << endl ;
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


