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
    // int a = 1, b = 2, c = 3, d = 4, e = 5;
    string str = "EABCDE";
    string a, b;
    cin >> a >> b;

    int x = abs((int)(a[0] - 'A') - (int)(a[1] - 'A'));
    int y = abs((int)(b[0] - 'A') - (int)(b[1] - 'A'));
    if (a[0] == 'E')
        x = min(x, (int)(a[1] - 'A') + 1);
    if (a[1] == 'E')
        x = min(x, (int)(a[0] - 'A') + 1);
    if (b[0] == 'E')
        y = min(y, (int)(b[1] - 'A') + 1);
    if (b[1] == 'E')
        y = min(y, (int)(b[0] - 'A') + 1);

    if (a[0] == 'D')
        x = min(x, (int)(a[1] - 'A') + 2);
    if (a[1] == 'D')
        x = min(x, (int)(a[0] - 'A') + 2);
    if (b[0] == 'D')
        y = min(y, (int)(b[1] - 'A') + 2);
    if (b[1] == 'D')
        y = min(y, (int)(b[0] - 'A') + 2);

    if (x == y)
        cout << "Yes" << endl;

    else
        cout << "No" << endl;
    // cout << x << " " << y << endl;
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
