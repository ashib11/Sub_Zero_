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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return b.second > a.second;
}
void solve()
{
    cin >> n >> d;
    for (long long i = 1; i <= n; i++)
        cin >> a[i].m >> a[i].s;
    sort(a + 1, a + n + 1, cmp);
    long long l = 1, r = 1, sum = a[1].s, ans = 0;
    while (r <= n && l <= n)
    {
        while (r + 1 <= n && a[r + 1].m - a[l].m < d)
            r++, sum += a[r].s;
        ans = max(ans, sum);
        sum -= a[l].s;
        l++;
    }
    cout << ans;
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
