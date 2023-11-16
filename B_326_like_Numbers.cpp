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
bool check(int i)
{
    int x = i % 10;
    i /= 10;
    int y = i % 10;
    i /= 10;
    int z = i % 10;
    if (y * z == x)
        return true;
    return false;
}
void solve()
{
    int n;
    cin >> n;
    int a, b, c;
    for (int i = n; i < 920; ++i)
    {
        if (check(i))
        {
            cout << i << endl;
            return;
        }
    }
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
