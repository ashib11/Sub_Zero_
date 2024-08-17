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
vector<vector<int>> v(50, vector<int>(50));
void preCal()
{

    v[0][0] = 0;
    v[1][0] = 1;
    v[0][1] = 1;
    v[1][1] = 0;
    int j = 2;
    for (int i = 1; i <= 24; ++i)
    {
        if (i % 2)
        {
            v[0][j] = 1;
            v[1][j] = 0;
            v[0][++j] = 0;
            v[1][j++] = 1;
        }
        else
        {
            v[0][j] = 0;
            v[1][j] = 1;
            v[0][++j] = 1;
            v[1][j++] = 0;
        }
    }
    int row = 2;
    for (int i = 1; i <= 24; ++i)
    {

        if (i % 2)
        {
            for (int j = 0; j < 50; ++j)
            {
                v[row][j] = v[1][j];
            }
            row++;
            for (int j = 0; j < 50; ++j)
            {
                v[row][j] = v[0][j];
            }
            row++;
        }
        else
        {
            for (int j = 0; j < 50; ++j)
            {
                v[row][j] = v[0][j];
            }
            row++;
            for (int j = 0; j < 50; ++j)
            {
                v[row][j] = v[1][j];
            }
            row++;
        }
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    preCal();
    while (tc--)
    {
        solve();
    }
    return 0;
}
