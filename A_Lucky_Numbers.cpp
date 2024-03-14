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
bool f()
{
}
void solve()
{
    int l, r;
    cin >> l >> r;
    if (r - l > 100)
        r = l + 99;
    int ans = 0;
    int indx = 0;
    for (int i = l; i <= r; ++i)
    {
        string tmp = to_string(i);
        sort(all(tmp));
        int x = (tmp[(int)tmp.size()-1] - '0') - (tmp[0] - '0');
        // cout << x << endl;
        if (ans <= x)
        {
            indx = i;
            ans = x;
        }
    }
    cout << indx << endl;
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
