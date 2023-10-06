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
    int arr[n+1][m+1];
    set<int> row, colmn;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                row.insert(i);
                colmn.insert(j);
            }
        }
    int cnt = min(n - row.size(), m - colmn.size());
    if (cnt & 1)
        cout << "Ashish" << endl;
    else
        cout << "Vivek" << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}