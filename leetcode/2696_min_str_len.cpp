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
    stack<char> st;
    int cnt = 0;
    int minLength(string s)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (st.empty() or (s[i] != 'D' and s[i] != 'B'))
            {
                st.push(s[i]);
            }
            else
            {
                if (s[i] == 'D' and st.top() == 'C')
                {
                    st.pop();
                    cnt += 2;
                }

                else if (s[i] == 'B' and st.top() == 'A')
                {
                    st.pop();
                    cnt += 2;
                }
                else
                    st.push(s[i]);
            }
        }
        return s.size() - cnt;
    }
};
void solve()
{
    Solution sl;
    string str;
    cin >> str;
    int val = sl.minLength(str);
    cout << val << endl;
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
