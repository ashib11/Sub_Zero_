#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
// find_by_order();
// order_of_key();
const int N = 1e3 + 10;
int dp[1005][3010];
int w[N], cap[N];
int lis(int indx, int s)
{
    if (s >= 3001)
        return 0;
    if (!indx)
        return 0;
    int &posh = dp[indx][s];
    if (~posh)
        return posh;
    if (s <= cap[indx])
    {
        posh = max(posh, 1 + lis(indx - 1, s + w[indx]));
    }
    return posh = max(posh, lis(indx - 1, s));
}
int main()
{
    fastIO();
    int n;
    while (cin >> n && n)
    {
        memset(dp, -1, sizeof(dp));
        memset(w, 0, sizeof(w));
        memset(cap, 0, sizeof(cap));
        for (int i = 1; i <= n; ++i)
        {
            cin >> w[i] >> cap[i];
        }
        cout << lis(n, 0) << endl;
    }
    return 0;
}
