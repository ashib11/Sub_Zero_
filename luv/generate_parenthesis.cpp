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
vector<string> valid;

void generates(string &s, int open, int close)
{
    if (open == 0 && close == 0)
    {
        valid.push_back(s);
        return;
    }
    if (open > 0)
    {
        s.push_back('(');
        generates(s, open - 1, close);
        s.pop_back(); // backtrack
    }
    if (close > 0)
    {
        if (open < close)
        {
            s.push_back(')');
            generates(s, open, close - 1);
            s.pop_back();
        }
    }
}
void solve()
{
    string s = "(())"; 
    generates(s, 2, 2);
    for(auto it : valid){
        cout << it << endl; 
    }
}
int main()
{
    fastIO();
    int tc;
    // cin >> tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}