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

void solve()
{
    int n;
    cin >> n;
    stack<string> st;
    while (n)
    {
        string tmp = to_string(n % 2);
        st.push(tmp);
        n /= 2;
    }
    string tmp = "";
    while (st.size() != 0)
    {
        tmp += st.top();
        // cout << st.top() << endl;
        st.pop();
    }
    int cnt = 0;
    // cout << tmp << endl;
    for (int i = tmp.size()-1; i >= 0; --i)
    {
       
        if (tmp[i] == '1')
            break;
        else
            cnt++;
    }
    cout << cnt << endl;
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
