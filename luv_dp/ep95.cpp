#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
const int N = 1e5;

int wt[105], val[105];
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
ll dp[105][N];
ll func(int ind, int wt_left)
{
    if (wt_left == 0)
        return 0;
    if (ind < 0)
        return 0;
    if (dp[ind][wt_left] != -1)
        return dp[ind][wt_left];
    ll ans = func(ind - 1, wt_left);
    if (wt_left - wt[ind] >= 0)
        ans = max(ans, func(ind - 1, wt_left - wt[ind]) + val[ind]);
    return dp[ind][wt_left] = ans;
}
int main()
{
    fastIO();
    int n, w;
    cin >> n >> w;
    memset(dp, -1 , sizeof(dp));
    for (int i = 0; i < n; ++i)
    {
        cin >> wt[i] >> val[i];
    }
    cout << func(n - 1, w);
    return 0;
}