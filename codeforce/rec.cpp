#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
#define p_b push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define getln(s) geline(cin, s)
#define F(i, a, b) for (int i = a; i < b; i++)
#define B(i, b, a) for (int i = b; i >= a; i--)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

int dp[5000];
int fun(int n, int a , int b , int c) {
	if (n == 0) return 0;
	if (n < 0) return INT_MIN;
	if(dp[n]!=-1)return dp[n];

	return dp[n] = 1 + max(fun(n - a, a, b, c), max(fun(n - b, a, b, c),fun(n - c, a, b, c)));
}
int main()
{
	fastIO();
	int n, a, b, c;
	memset(dp,-1,sizeof(dp));
	cin >> n >> a >> b >> c;
	fun(n,a,b,c);
	cout << dp[n];
	return 0;
}