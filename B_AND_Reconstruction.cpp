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

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n - 1);
    for (auto &i : v)
        cin >> i;
    vector<ll> ans(n);
    ans[0] = v[0];
    for (int i = 1; i < n; ++i)
    {
        ans[i] = v[i - 1] | (i < n - 1 ? v[i] : 0);
    }
    for (int i = 0; i < n - 1; ++i)
    {
        if ((ans[i] & ans[i + 1]) != v[i])
        {
            cout << "-1" << endl;
            return;
        }
    }
    for (auto it : ans)
        cout << it << ' ';
    cout << endl;
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
