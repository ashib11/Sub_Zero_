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
void solve()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    set<char> st;
    for (int i = 0, j = 0; i < b.size(); i++)
    {
        if (a[j] != b[i])
        {
            st.insert(b[i]);
        }
        else
            j++;
    }
    for (auto &c : st)
        cout << c;
    cout << endl;
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
