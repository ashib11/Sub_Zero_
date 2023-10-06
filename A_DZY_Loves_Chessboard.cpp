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
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> board(n);
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == '.')
            {
                if ((i + j) % 2)
                    board[i][j] = 'W';
                else
                    board[i][j] = 'B';
            }
        }
        cout << board[i] << endl;
    }
}
int main()
{
    fastIO();
    int tc;
    tc = 1; 
    while (tc--)
    {
        solve();
    }
    return 0;
}