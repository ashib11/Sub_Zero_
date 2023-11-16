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
bool chck(string &a)
{
    for (int i = 1; i < a.size(); ++i)
    {
        if (a[i] == a[i - 1])
            return false;
    }
    return true;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    if (chck(a))
    {
        cout << "Yes" << endl;
        return;
    }
    else if (!chck(a) and !chck(b))
    {
        cout << "No" << endl;
        return; 
    }
    for (int i = 1; i < a.size(); ++i)
    {
        if (a[i] == a[i - 1])
        {
            if (b[0] == a[i - 1] or b[m - 1] == a[i])
            {
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
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
