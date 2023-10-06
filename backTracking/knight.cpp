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
const int n = 8;
int recu(int x, int y, int move, int sol[n][n], int xmove[], int ymove[]);
bool visited(int x, int y, int arr[n][n])
{
    if (x >= 0 && x < n && y >= 0 && y < n && arr[x][y] == -1)
        return true;
    else
        return false;
}
void pirit(int sol[n][n])
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << " " << setw(2) << sol[i][j] << " ";
        }
        cout << endl; 
    }
}
int solveKT(int n)
{
    int arr[n][n];
    memset(arr, -1, sizeof(arr));
    int Xmove[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int Ymove[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    arr[0][0] = {0};

    if (recu(0, 0, 1, arr, Xmove, Ymove) == 0)
    {
        cout << "not found" << endl;
        return 0;
    }
    else
    {
        pirit(arr);
    }
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    while (tc--)
    {

        solveKT(n);
    }
    return 0;
}