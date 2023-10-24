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
const int N = 1e6;
vector<int> v;
int dp[N];
int lds(int indx)
{
    if (dp[indx] != -1)
        return dp[indx];
    int cnt = 1;
    for (int i = 0; i < indx; ++i)
    {
        if (v[i] > v[indx])
        {
            cnt = max(cnt, lds(i) + 1);
        }
    }
    return dp[indx] = cnt;
}
int main()
{
    fastIO();
    int n;
    int cnt = 0;
    int tc = 1;
    string gandu = "";
    while (1)
    {

        cin >> n;
        if (n == -1)
        {
            ++cnt;
            if (cnt == 2)
            {
                break;
            }
            memset(dp, -1, sizeof(dp));
            int ans = 0;
            for (int i = 0; i < v.size(); ++i)
            {
                ans = max(ans, lds(i));
            }
            cout << gandu << "Test #" << tc++ << ":\n  maximum possible interceptions: " << ans << endl;
            v.clear();
            gandu = "\n";
        }
        else if (n != 1)
            cnt = 0;
        v.push_back(n);
    }
    return 0;
}
