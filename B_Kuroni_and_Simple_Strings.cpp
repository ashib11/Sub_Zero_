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

void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    stack<int> st, st2;
    vector<int> ans;
    for (int i = 0; i < n; ++i)
    {
        if (str[i] == '(')
        {
            st.push(i + 1);
        }
        else
        {
            int j = i;
            while (str[j] == ')')
            {
                st2.push(j + 1);
                ++j;
            }
            if(st.size() > st2)
            --j;
            i = j;
        }
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
