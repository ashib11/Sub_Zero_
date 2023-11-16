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
    int n;
    cin >> n;
    vector<vector<int>> arr(200);
    for (int i = 0; i < n; ++i)
    {
        int nb;
        cin >> nb;
        arr[i].resize(nb);
        for (int j = 0; j < nb; ++j)
        {
            int x;
            cin >> x;
            arr[i][j] = x;
        }
    }
    int k;
    cin >> k;
    int mn = 100;
    set<int> ans;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < (int)arr[i].size(); ++j)
        {
            if (arr[i][j] == k)
            {
                mn = min((int)arr[i].size(), mn);
            }
        }
    }
    // cout << mn << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <(int) arr[i].size(); ++j)
        {
            if (arr[i][j] == k and (int) arr[i].size() == mn)
            {
                ans.insert(i + 1);
            }
        }
    }
    cout << ans.size() << endl;
    if (!ans.size())
        return;
    for (auto it : ans)
        cout << it << " ";

    cout << endl;
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
