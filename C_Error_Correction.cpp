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
// find_by_key();
// value_by_key();
int dlt(string str, string s)
{
    int j = 0;
    if (s.size() > str.size())
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == str[j])
            {
                j++;
            }
        }
        return (s.size()-j); 
    }
    else if (str.size() > s.size())
    {
        for (int i = 0; i < str.size(); ++i)
        {
            if (s[j] == str[i])
            {
                j++;
            }
        }
    }
    return (str.size()-j);
}

int check(string str, string s)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == str[i])
        {
            cnt++;
        }
    }
    return cnt;
}
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int l = str.size();
    set<int> ans;
    string s;
    for (int i = 1; i <= n; ++i)
    {

        cin >> s;
        // cout << s.size() << " " << str.size() << endl;
        int ls = s.size();
        if (abs(ls - l) > 1)
        {
            // cout << "H" << endl;
            continue;
        }
        if (s == str)
        {
            ans.insert(i);
        }
        if (check(str, s) == (l - 1) && ls == l)
        {
            ans.insert(i);
        }
        if (str.size() > s.size())
        {
            if ((str.substr(1, l) == s) || (str.substr(0, (l - 1)) == s))
            {
                ans.insert(i);
            }
        }
        if (dlt(str, s) == (1))
        {
            // cout << i << endl;
            ans.insert(i);
        }
        // cout << dlt(str,s) << endl ;
    }
    cout << ans.size() << endl;
    for (auto it : ans)
        cout << it << " ";
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
