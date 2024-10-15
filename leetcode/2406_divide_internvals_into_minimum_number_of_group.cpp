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
class Solution
{
public:
    int minGroups(vector<vector<int>> &intervals)
    {
        int mx = -1, mn = 1e8;
        vector<int> yo(1e6 + 3, 0);
        for (auto it : intervals)
        {
            for (int i = 0; i < it.size(); ++i)
            {
                if (!i)
                {
                    yo[it[i]] += 1;
                    mn = min(mn, it[i]);
                }
                else
                {
                    yo[it[i] + 1] -= 1;
                    mx = max(mx, it[i]+1); 

                }
            }
        }
        int ans = 0, cur = 0;
        cout << mn << ' ' << mx << endl; 
        for (int i = mn; i <=mx; ++i)
        {
            cur += yo[i];
            ans = max(ans, cur);
        }
        return ans;
    }
};
void solve()
{
    Solution sl;
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        v[i].push_back(a);
        v[i].push_back(b);
    }
    int ans = sl.minGroups(v);
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
