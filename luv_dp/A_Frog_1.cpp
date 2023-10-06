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
int func(int i)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int cost = INT_MAX;
    cost = min(cost, func(i - 1) + abs(h[i] - h[i - 1]));
    if (i > 1)
        cost = min(cost, func(i - 2) + abs(h[i] - h[i - 2]));

    return dp[i] = cost;
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; ++i)
    {
        cin >> h[i];
    }
    cout << func(n - 1) << endl;
    return 0;
}