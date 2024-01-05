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
    int n = (a + b);
    string ans = "";
    for (int i = 1; i <= n; ++i)
    {
        if (a and (i % 2))
        {
            --a;
            ans += '0';
            // cout << i << " 0" << endl;
        }
        else if (b and !(i % 2))
        {
            --b;
            ans += '1';
            // cout << i << " 1" << endl;
        }
        else
            break;
    }
    if (a)
    {
        for (int i = 0; i < a; ++i)
            cout << 0;
    }
    else if (b)
        for (int i = 0; i < b; ++i)
            cout << 1;
    cout << ans << endl;
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
