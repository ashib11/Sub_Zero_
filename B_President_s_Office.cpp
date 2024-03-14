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
    int a, b;
    cin >> a >> b;
    char x;
    cin >> x;
    vector<string> v(a);
    for (auto &i : v)
        cin >> i;
    set<char> st;
    st.insert(x);
    st.insert('.'); 
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            if (v[i][j] == x)
            {
                if (i > 0)
                    st.insert(v[i - 1][j]);
                if (j > 0)
                    st.insert(v[i][j - 1]);
                if (i < a - 1)
                    st.insert(v[i + 1][j]);
                if (j < b - 1)
                    st.insert(v[i][j + 1]);
            }
        }
    }
    cout << st.size()-2 << endl; 
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
