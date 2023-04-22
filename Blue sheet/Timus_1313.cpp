#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
#define p_b push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define getln(s) geline(cin, s)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
    }
    for (int i = 0; i < n; ++i)
    {
        int x = i;
        for (int j = 0; j < n; ++j)
        {
            cout << arr[x][j] << " ";
            if (x == 0)
                break;
            else
                x--;
        }
    }

    for (int i = 1; i < n; ++i)
    {
        int x = i;
        for (int j = n - 1; j >= 1; --j)
        {
            // cout << j << "j " << x << "x " ;
            cout << arr[j][x] << " ";
            if (x == n - 1)
                break;
            x++;
        }
    }
    return 0;
}