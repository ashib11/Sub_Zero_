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
const int arr[] = {1, 5, 10, 25, 50};
const int N = 1e5 + 10;
ll dp[6][N];
ll func(int val, int indx)
{
    if (indx < 0)
        return 0;
    if (val == 0)
        return 1;
    ll &posh = dp[indx][val];
    if (~posh)
        return posh;
    posh = func(val, indx - 1);
    ll ans = 0;
    if (arr[indx] <= val)
        ans = func(val - arr[indx], indx);

    return posh += ans;
}
int main()
{
    fastIO();
    ll n;
    memset(dp, -1, sizeof(dp));
    while (cin >> n)
    {
        ll x = func(n, 4);
        if (x == 1)
            cout << "There is only " << x << " way to produce " << n << " cents change." << endl;
        else cout << "There are " << x << " ways to produce " << n << " cents change." << endl;
    }
    return 0;
}
