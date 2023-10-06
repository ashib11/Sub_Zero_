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
// find_by_key();
// value_by_key();
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(all(v));
    vector<int> ans;
    for (int i = 0; i < (n / 2); ++i)
    {
        ans.push_back(v[n - 1 - i]);
        ans.push_back(v[i]);
    }
    if (n % 2 != 0)
    {
        ans.push_back(v[(n / 2)]);
    }
    for (int i = ans.size() - 2; i >= 1; --i)
    {
        if (abs(ans[i + 1] - ans[i]) > abs(ans[i] - ans[i - 1]))
        {
            cout << "impossible" << endl;
            return;
        }
    }
    for (int i = ans.size() - 1; i >= 0; --i)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    fastIO();
    int tc;
    // cin >> tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}
