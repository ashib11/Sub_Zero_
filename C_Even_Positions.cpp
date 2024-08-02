
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
    ll n;
    string str;
    cin >> n >> str;
    stack<ll> st;
    st.push(0);
    ll ans = 0;
    for (int i = 1; i < n; ++i)
    {
        if (str[i] == '_')
        {
            if (st.size())
            {
                int tmp = st.top();
                st.pop();
                ans += (i - tmp);
            }
            else
                st.push(i);
        }
        else if (str[i] == '(')
            st.push(i);
        else
        {
            int tmp = st.top();
            st.pop();
            ans += (i - tmp);
        }
    }
    cout << ans << endl; 
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
