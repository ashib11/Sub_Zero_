#include <iostream>
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
    for (int i = 1; i < n; ++i)
        cout << "(";
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            if (j > 1)
            {
                if (j % 2 == 0)
                {
                    cout << '-';
                }
                else
                    cout << '+';
            }
            cout << "sin(" << j;
        }
        for (int j = 1; j <= i; ++j)
        {
            cout << ")";
        }
        cout << "+" << (n + 1 - i);
        if (i != n)
        {
            cout << ")";
        }
    }
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}
