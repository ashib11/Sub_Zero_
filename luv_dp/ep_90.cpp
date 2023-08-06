#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
const int N = 1e5 + 10;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int dp[N];

int func(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = func(n - 1) + func(n - 2);
}
int main()
{
    fastIO();
    memset(dp,-1,sizeof(dp)); 
    int n; 
    cin >> n; 
    cout << func(n) << endl; 
    return 0;
}