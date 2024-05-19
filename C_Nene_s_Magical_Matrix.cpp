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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3

void solve()
{
    ll n;
    cin >> n;
    ll tmp = n;
    ll sum = 0;
    while (tmp > 0)
    {
        sum += 2 * (tmp * tmp) - tmp;
        --tmp;
    }
    ll move = 2 * n;
    cout << sum << ' ' << move << endl;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= 2; ++j)
        {
            cout << j << ' ' << i << ' ';
            for (int k = n; k > 0; --k)
            {
                cout << k << ' ';
            }
            cout << endl;
        }
    }
    // for (int i = 1; i <= n; ++i)
    // {
    //     for (int j = 1; j <= n; ++j)
    //         cout << arr[i][j] << ' ';
    //     cout << endl;
    // }
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
