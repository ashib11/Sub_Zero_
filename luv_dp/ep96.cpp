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
ll func(int ind, int val_left)
{
    if (val_left == 0)
        return 0;
    if (ind < 0)
        return 1e15;
    if (dp[ind][val_left] != -1)
        return dp[ind][val_left];
    ll ans = func(ind - 1, val_left);
    if (val_left - val[ind] >= 0)
        ans = min(ans, func(ind - 1, val_left - val[ind]) + wt[ind]);
    return dp[ind][val_left] = ans;
}
int main()
{
    fastIO();
    int n, w;
    cin >> n >> w;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; ++i)
    {
        cin >> wt[i] >> val[i];
    }
    int p = 1e5;
    for (int i = p; i >= 0; --i)
    {
        if (func(n - 1, i) <= w)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}