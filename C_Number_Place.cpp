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
bool isValidSudoku(vector<vector<int>> &grid)
{
    for (int i = 0; i < 9; i++)
    {
        set<int> rowSet;
        for (int j = 0; j < 9; j++)
        {
            int num = grid[i][j];
            if (rowSet.count(num) == 0)
            {
                rowSet.insert(num);
            }
            else
            {
                return false;
            }
        }
    }

    for (int j = 0; j < 9; j++)
    {
        set<int> colSet;
        for (int i = 0; i < 9; i++)
        {
            int num = grid[i][j];
            if (colSet.count(num) == 0)
            {
                colSet.insert(num);
            }
            else
            {
                return false;
            }
        }
    }

    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 0; j < 9; j += 3)
        {
            set<int> subgridSet;
            for (int x = i; x < i + 3; x++)
            {
                for (int y = j; y < j + 3; y++)
                {
                    int num = grid[x][y];
                    if (subgridSet.count(num) == 0)
                    {
                        subgridSet.insert(num);
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
    }

    return true;
}

void solve()
{
    vector<vector<int>> grid(9, vector<int>(9));
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> grid[i][j];
        }
    }

    bool result = isValidSudoku(grid);

    if (result)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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
