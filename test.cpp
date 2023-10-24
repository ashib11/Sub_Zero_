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
// find_by_order();
// order_of_key();
void print(stack<char> s)
{
    while (s.size())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    stack<char> st;
    for (int i = 0; i < n; ++i)
    {
        char x;
        cin >> x;
        st.push(x);
    }
    int nq;
    cin >> nq;
    stack<char> ans;
    for (int i = 0; i < nq; ++i)
    {
        stack<char> temp = st;
        char y;
        cin >> y;
        while (temp.top() != y)
        {
            ans.push(temp.top());
            temp.pop();
        }
        ans.push(temp.top()); 
            print(ans);
    }
}
int main()
{
    fastIO();
    int tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}
