#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
const int N = 1e5 + 10;
int h[N];
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int dp[N];
int k;
int func(int i)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int cost = INT_MAX;
    for (int j = 1; j <= k; ++j)
        if (i - j >= 0)
            cost = min(cost, func(i - j) + abs(h[i] - h[i - j]));

    return dp[i] = cost;
}
int main()
{
    fastIO();
    int n;
    cin >> n >> k;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; ++i)
    {
        cin >> h[i];
    }
    cout << func(n - 1) << endl;
    return 0;
}