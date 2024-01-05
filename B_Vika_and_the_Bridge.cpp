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
    map<int, vector<int>> mp;
    int n, color;
    cin >> n >> color;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        mp[x].push_back(i);
    }
    int ans = n;
    for (auto it : mp)
    {
        int i = 0;
        vector<int> tmp;
        for (auto pos : it.second)
        {
            tmp.push_back(pos - i - 1);
            // cout << tmp.back() << endl;
            i = pos;
        }
        tmp.push_back(n - i);
        sort(all(tmp));
        ans = min(max(tmp[tmp.size() - 1] / 2, tmp[tmp.size() - 2]), ans);
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
