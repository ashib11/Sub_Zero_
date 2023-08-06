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
const int N = 1e4+10; 
int dp[N]; 
int func(int amount, vector<int> &coins)
{
    if (amount == 0)
        return 0;
    if(dp[amount]!=-1) return dp[amount]; 
    int ways = 0;
    for (int it : coins)
    {
        if (amount - it >= 0)
            ways += (func(amount - it, coins));
    }
    return dp[amount] =  ans;
}
int coinChange (vector<int> &coin, int amount) {
    int ans = func(amount, coin); 
    return ans == INT_MAX? -1: ans; 
}
int main()
{
    fastIO();
    memset(dp, -1, sizeof(dp)); 
    vector<int> coins = {2,2}; 
    cout << coinChange(coins,11) << endl; 
    return 0;
}