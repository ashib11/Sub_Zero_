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

ll ans = 0;
int dp[N]; 
void rec(int arr[][100], int i, int j, int n, int m, ll sum)
{
    if (i >= n|| j >= m)
    {
        ans = max(ans, sum);
        return;
    }

    sum += arr[i][j];
    rec(arr, i + 1, j, n, m, sum); 
    rec(arr, i, j + 1, n, m, sum); 
}

int main()
{
    fastIO();
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    memset(dp,-1,sizeof(dp)); 
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }
    rec(arr, 0, 0, n, m, 0);
    cout << ans << endl;
    return 0;
}
