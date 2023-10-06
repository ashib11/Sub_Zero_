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
    int a[5][5] = {0};
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
            cin >> a[i][j];
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
            cout << ((a[i][j] + a[i + 1][j] + a[i - 1][j] + a[i][j - 1] + a[i][j + 1]) + 1) % 2;
        cout << endl;
    }
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