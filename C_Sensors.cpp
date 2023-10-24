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
bool is_connected(vector<vector<char>> &grid, int row, int col, char value)
{
    int numRows = grid.size();
    int numCols = grid[0].size();

    if (row < 0 || row >= numRows || col < 0 || col >= numCols)
    {
        return true;
    }
    if (grid[row][col] == value)
    {
        grid[row][col] = 'X';

        bool connected =
            is_connected(grid, row - 1, col, value) &&
            is_connected(grid, row + 1, col, value) &&
            is_connected(grid, row, col - 1, value) &&
            is_connected(grid, row, col + 1, value) &&
            is_connected(grid, row - 1, col - 1, value) &&
            is_connected(grid, row - 1, col + 1, value) &&
            is_connected(grid, row + 1, col - 1, value) &&
            is_connected(grid, row + 1, col + 1, value);

        return connected;
    }

    return true;
}
int count_connected_regions(vector<vector<char>> &grid, char value)
{
    int count = 0;
    int numRows = grid.size();
    int numCols = grid[0].size();

    for (int row = 0; row < numRows; ++row)
    {
        for (int col = 0; col < numCols; ++col)
        {
            if (grid[row][col] == value)
            {
                if (is_connected(grid, row, col, value))
                {
                    count++;
                }
            }
        }
    }

    return count;
}
void solve()
{
    int numRows, numCols;

    cin >> numRows;

    cin >> numCols;

    vector<vector<char>> grid(numRows, vector<char>(numCols));

    for (int row = 0; row < numRows; ++row)
    {
        for (int col = 0; col < numCols; ++col)
        {
            cin >> grid[row][col];
        }
    }

    char value = '#';

    int regions = count_connected_regions(grid, value);
    cout << regions << endl;
}
int main()
{
    fastIO();
    int tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}
