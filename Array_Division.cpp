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
bool check(vector<ll> &v, ll mid, int k)
{
    for (int i = 0; i <(int) v.size(); ++i)
    {
        if (v[i] > mid)
            return false;
    }
    ll cnt = 1;
    ll sum = v[0];
    for (int i = 1; i < (int)v.size(); ++i)
    {
        if (v[i] + sum <= mid)
        {
            sum += v[i];
        }
        else
        {
            cnt++;
            sum = v[i];
        }
    }
    return cnt <= k;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    ll l = 0, r = 2e15, ans = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(v, mid, k))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
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
