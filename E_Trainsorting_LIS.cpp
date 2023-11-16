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
const int N = 1e5;
vector<int> v(N);
int lis[N], lds[N];
int LIS(int indx)
{
    int &posh = lis[indx];
    if (~posh)
        return lis[indx];
    posh = 1;
    for (int i = 0; i < indx; ++i)
        if (v[indx] > v[i])
            posh = max(posh, LIS(i) + 1);
    return posh;
}
int LDS(int indx)
{
    int &posh = lds[indx];
    if (~posh)
        return lds[indx];
    posh = 1;
    for (int i = 0; i < indx; ++i)
        if (v[indx] < v[i])
            posh = max(posh, LDS(i) + 1);
    return posh;
}
void solve()
{
    int n;
    cin >> n;
    memset(lis, -1, sizeof(lis));
    memset(lds, -1, sizeof(lds));
    v.resize(n);
    for (auto &i : v)
        cin >> i;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        // cout << LIS(i) << " " << LDS(i) << endl;
        int a = LIS(i);
        int b = LDS(i);
        ans = max(a + b + 1, ans);
    }
    cout << ans << endl;
    v.clear();
}
int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
