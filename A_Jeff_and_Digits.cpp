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
    int c0 = 0, c5 = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            c0++;
        }
        else
        {
            c5++;
        }
    }
    if (c0 == 0)
    {
        cout << -1 << '\n';
    }
    else if (c5 < 9)
    {
        cout << 0 << '\n';
    }
    else
    {
        int a = (c5 / 9);
        for (int i = 1; i <= a; i++)
        {
            cout << 555555555;
        }
        for (int i = 1; i <= c0; i++)
        {
            cout << 0;
        }
        cout << '\n';
    }
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