#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
const int N = 25e2 + 10;
vector<int> v(N);
int dp[N];
int lis(int i)
{
    int ans = 1;
    if (dp[i] != -1)
        return dp[i];
    for (int j = 0; j < i; ++j)
    {
        if (v[i] > 0 && v[j] < 0)
            ans = max(ans, lis(j) + v[i] - v[j]);
        if (v[i] < 0 && v[j] > 0)
            ans = max(ans, lis(j) + v[j] - v[i]);
    }
    return dp[i] = ans;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        memset(dp, -1, sizeof(dp));
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            ans = max(ans, lis(i));
        }
        cout << ans << endl;
    }
    return 0;
}