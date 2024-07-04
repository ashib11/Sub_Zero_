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
    int n;
    cin >> n;
    int x1 = 2, x2 = 3;
    int ans1 = 0, ans2 = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (x1 * i <= n)
        {
            ans1 += (x1 * i);
        }
        if (x2 * i <= n)
            ans2 += (x2 * i);
    }
    if (ans1 > ans2)
    {
        cout << x1 << endl;
    }
    else
        cout << x2 << endl;
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
