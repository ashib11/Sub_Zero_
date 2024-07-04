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
    if (n == 1 or n == 2 or n == 4)
    {
        cout << -1 << endl;
        return;
    }
    if (n % 3 == 0)
    {
        cout << n / 3 << ' ' << 0 << ' ' << 0 << endl;
    }
    else if (n % 3 == 1)
    {
        cout << (n - 7) / 3 << ' ' << 0 << ' ' << 1 << endl;
    }
    else
        cout << (n - 5) / 3 << ' ' << 1 << ' ' << 0 << endl;
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
