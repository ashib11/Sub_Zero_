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

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<pair<int, int>> mp;
    for (int i = 1; i <= n; ++i)
    {
        mp.push_back({2, i});
    }

    for (int i = 1; i <= k; ++i)
    {
        int x;
        cin >> x;
        mp[x-1].first--;
        // cout << mp[x-1].first << " " << mp[x-1].second << endl;
    }
    sort(all(mp));
    for(auto it : mp)
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
