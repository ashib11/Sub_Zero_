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
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    if (a.size() > b.size())
    {
        for (int i = 0; i < a.size(); ++i)
        {
            if (a.substr(i, b.size()) == b)

            {
                cout << 0 << endl;
                return;
            }
        }
    }
    string temp = "";
    for (int j = 0; j <= 100; ++j)
    {
        temp += a;
        a = temp ; 
        int x = temp.size();
        for (int i = 0; i < x; ++i)
        {

            if (temp.substr(i, b.size()) == b)
            {
                cout << j << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
