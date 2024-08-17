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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return b.second > a.second;
    }
    return a.first > b.first;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> vp(n);
    for (auto &[a, b] : vp)
    {
        cin >> a >> b;
    }
    sort(all(vp), cmp);
    int ans = 0;
    for (auto it : vp)
    {
        if (it == vp[k - 1])
            ans++;
    }
    cout << ans << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
