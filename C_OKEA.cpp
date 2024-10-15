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
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << "YES" << endl;
        for (int i = 1; i <= n; ++i)
        {
            cout << i << endl;
        }
        return;
    }
    if (n % 2)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    int a = 1, b = 2;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= k; ++j)
        {
            if (i % 2)
            {
                cout << a << ' ';
                a += 2;
            }
            else
            {
                cout << b << ' ';
                b += 2;
            }
        }
        cout << endl;
    }
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
