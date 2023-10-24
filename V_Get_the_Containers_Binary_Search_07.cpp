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
int n, m;
vector<int> v(N);
bool check(int mid)
{
    int cnt = 1, sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] > mid)
            return false;
        sum += v[i];
        if (sum > mid)
        {
            cnt++;
            sum = v[i];
        }
    }
    return cnt <= m;
}
void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    int l = 0;
    int h = INT_MAX;
    ll ans = 0;
    while (h >= l)
    {
        ll m = (h + l) / 2;
        if (check(m))
        {
            ans = m;
            h = m - 1;
        }
        else
            l = m + 1;
    }
    cout << ans << endl;
}
int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}
