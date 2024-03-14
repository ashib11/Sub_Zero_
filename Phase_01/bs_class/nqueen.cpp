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
bool isSafe(vector<vector<int>> &v, int x, int y, int n)
{

    for (int i = 0; i < x; ++i)
    {
        if (v[i][y] == 1)
        {
            return false;
        }
    }
    int row = x, col = y;
    while (x >= 0 and y >= 0)
    {
        if (v[x][y] == 1)
            return false;
        row--;
        col--;
    }
    row = x, col = y;
    while (x >= 0 and y < n)
    {
        if (v[x][y] == 1)
            return false;
        row--;
        col++;
    }
    return true;
}
bool bhugichugi(vector<vector<int>> &v, int x, int n)
{
    if (x >= n)
        return true;
    for (int i = 0; i < n; ++i)
    {
        if (isSafe(v, x, i, n))
        {
            v[x][i] = 1;

            if (bhugichugi(v, x + 1, n))
            {
                return true;
            }
            v[x][i] = 0;
        }
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));
    if (bhugichugi(v, 0, n))
    {
        cout << "YES" << endl;
        for(int i =0 ; i < n; ++i){
            cout << 
        }
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
