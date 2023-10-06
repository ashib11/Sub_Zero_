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
    vector<pair<int, int>> v;
    for (int i = 1; i <=n; ++i)
    {
        ll x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(allr(v));
    ll cnt = 0;
    ordered_set<ll> ans;
    for (auto it : v)
    {
        if (ans.size() == 0)
        {
            ans.insert(it.second);
        }
        else
        {
            cnt += ans.order_of_key(it.second);
            ans.insert(it.second);
        }
    }
    cout << cnt << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}