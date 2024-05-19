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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3
ll calc(int n, vector<int> &v)
{
    vector<int> pre(n + 1, 0);
    ll cnt = 0, ans = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        if (v[i] == 0)
            cnt++;
        else
        {
            pre[i] = cnt;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        // cout << pre[i] << ' ';
        ans += pre[i];
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    ll ans = calc(n, v);
    // cout << ans << endl;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == 0)
        {
            v[i] = 1;
            ans = max(ans, calc(n, v));
            v[i] = 0;
            break;
        }
    }
    // cout << ans << endl;
    for (int i = n - 1; i >= 0; --i)
    {
        if (v[i] == 1)
        {
            v[i] = 0;
            ans = max(ans, calc(n, v));
            v[i] = 1;
            break;
        }
    }
    cout << ans << endl;
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
