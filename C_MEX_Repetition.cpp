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
    ll n, k;
    cin >> n >> k;
    vector<int> v(n + 1, 0);
    map<int, int> mp;
    int mx = -1;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        mp[v[i]]++;
        mx = max(mx, v[i]);
    }
    for (int i = 0; i <= mx + 1; ++i)
    {
        if (mp[i] == 0)
        {
            v[n] = i;
            break;
        }
    }
    vector<int> ans(n + 1);
    for (int i = 0; i <= n; ++i)
    {
        ll indx = (k + i) % (n + 1);
        ans[indx] = v[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cout << ans[i] << ' ';
    }
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
