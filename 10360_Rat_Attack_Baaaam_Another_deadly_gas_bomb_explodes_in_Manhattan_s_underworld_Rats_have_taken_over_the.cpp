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
const int N = 1030;
bool isValid(int j, int k)
{
    if (k < 1 or k > 1024 or j < 1 or j > 1024)
        return false;
    return true;
}
void solve()
{
    int n, d;
    cin >> n >> d;
    int arr[N][N]{};
    for (int i = 1; i <= n; ++i)
    {
        int x, y, p;
        cin >> x >> y >> p;
        for (int j = x - d; j <= x + d; ++j)
        {
            for (int k = y - d; k <= y + d; ++k)
            {
                if (isValid(j, k))
                {
                    arr[j][k] += p;
                }
            }
        }
    }
    int mx = -1;
    int x, y;
    for (int i = 1; i <= 1024; ++i)
    {
        for (int j = 1; j <= 1024; ++j)
        {
            if (arr[i][j] > mx)
            {
                x = i, y = j;
                mx = arr[i][j];
            }
        }
    }
    cout << x << ' ' << y << ' ' << mx << endl;
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
