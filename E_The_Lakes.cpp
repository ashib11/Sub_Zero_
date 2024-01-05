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
const int N = 1e3+100;
int n, m;
bool vist[N][N];
int arr[N][N];
int dfs(int s, int t)
{
    vist[s][t] = true;
    int ans = arr[s][t];
    if (s != 0 and arr[s - 1][t] != 0 and !vist[s - 1][t])
        ans += dfs(s - 1, t);
    if (s != n - 1 and arr[s + 1][t] != 0 and !vist[s + 1][t])
        ans += dfs(s + 1, t);
    if (t != 0 and arr[s][t - 1] != 0 and !vist[s][t - 1])
        ans += dfs(s, t-1);
    if (t != m - 1 and arr[s][t + 1] != 0 and !vist[s][t + 1])
        ans += dfs(s, t + 1);
    return ans;
}
void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            vist[i][j] = false;
            cin >> arr[i][j];
        }
    int mx = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (!vist[i][j] and arr[i][j] != 0)
                mx = max(mx, dfs(i, j));
        }
    }
    cout << mx << endl;
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