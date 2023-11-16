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
    int arr[6] = {0};
    vector<int> v(n);
    bool check = false;
    int cnt = 0;
    bool four = false;
    for (auto &i : v)
    {
        cin >> i;
        if (i % 2 == 0)
            arr[2]++;
        if (i % 3 == 0)
            arr[3]++;
        if (i % 4 == 0)
            arr[4]++;
        if (i % 5 == 0)
            arr[5]++;
    }
    if (arr[k])
    {
        cout << 0 << endl;
        return;
    }
    if (k == 4)
    {
        if (arr[k] || arr[2] >= 2)
        {
            cout << 0 << endl;
            return;
        }
        else if (arr[2])
        {
            cout << 1 << endl;
            return;
        }
    }
    int ans = 2e5 + 10;
    for (int i = 0; i < n; ++i)
    {
        int x = v[i] % k;
        int val = k - x;
        // cout << val << endl;
        ans = min(val, ans);
    }
    if (k == 4)
        ans = min(2, ans);
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
