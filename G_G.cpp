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
    int n, m;
    cin >> n >> m;
    int arr[n + 2][m + 2]{};
    int x1, y1;
    cin >> x1 >> y1;
    arr[x1][y1] = 1;
    int x2, y2;
    cin >> x2 >> y2;
    arr[x2][y2] = 2;
    // for (int i = 1; i <= m; ++i)
    // {
    //     if (i % 2)
    //         arr[1][i + 2] = arr[1][1];
    // }
    // for (int i = 1; i <= n; ++i)
    // {
    //     arr[i + 2][1] = arr[1][1];
    // }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
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
