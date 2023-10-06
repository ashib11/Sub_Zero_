#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
const int N = 1e5;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int dp[200][20005];
bool func(int i, int sum, vector<int> &nums)
{
    if (sum == 0)
        return true;
    if (i < 0)
        return false;
    if (dp[i][sum] != -1)
        return dp[i][sum];
    bool isPossible = func(i - 1, sum, nums);
    if (i - 1 >= 0)
        isPossible |= func(i - 1, sum - nums[i], nums);
    return dp[i][sum] = isPossible;
}
bool canPartition(vector<int> &nums)
{   memset(dp, -1, sizeof(dp)); 
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if (sum & 1)
        return false;
    sum /= 2;
    return func(nums.size() - 1, sum, nums);
}
int main()
{
    fastIO();

    return 0;
}