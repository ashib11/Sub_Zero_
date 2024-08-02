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
    if (n < 6)
    {
        if (n == 1)
            cout << 1 << '\n'
                 << "1" << '\n';
        else if (n == 2)
            cout << 2 << '\n'
                 << "1 2" << '\n';
        else if (n == 3)
            cout << 2 << '\n'
                 << "1 2 2" << '\n';
        else if (n == 4)
            cout << 3 << '\n'
                 << "1 2 2 3" << '\n';
        else if (n == 5)
            cout << 3 << '\n'
                 << "1 2 2 3 3" << '\n';
    }
    else
    {
        cout << 4 << '\n';
        for (int i = 1; i <= n; i++)
            cout << i % 4 + 1 << ' ';
        cout << '\n';
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
