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
    int l = 0, r = 0, t = 0, d = 0;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        if (x > 0 and y > 0)
            r = 1, t = 1;
        else if (x > 0 and y < 0)
            r = 1, d = 1;
        else if (x < 0 and y < 0)
            l = 1, d = 1;
        else if (x < 0 and y > 0)
            l = 1, t = 1;
    }
    if (l + r + d + t == 4)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
