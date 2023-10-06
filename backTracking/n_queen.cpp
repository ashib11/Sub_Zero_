#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void printsol(vector<vector<int>> &arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)

            if (arr[i][j])
                cout << "Q ";
            else
                cout << ". ";
        cout << endl;
    }
}
bool isSafe(vector<vector<int>> &arr, int r, int c)
{
    int i, j;
    for (i = 0; i < c; ++i)
        if (arr[r][i])
            return false;
    for (int i = r, j = c; i >= 0 && j >= 0; --i, --j)
        if (arr[i][j])
            return false;
}
bool solveNQ(vector<vector<int>> &arr, int col, int n)
{
    if (col >= n)
        return true;
    for (int i = 0; i < n; ++i)
    {
        if (isSafe(arr, i, col))
        {
            arr[i][col] = 1;
        }
    }
}
bool solve()
{
    int N;
    cin >> N;
    vector<vector<int>> board(N, vector<int>(N, 0));
    if (solveNQ(board, 0, N) == false)
    {
        cout << "Solution doesn't exist" << endl;
        return false;
    }
    printsol(board, N);
    return true;
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}