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
    int arr[n + 2] = {0};
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    int brr[n + 2] = {0};
    for (int i = 1; i < n; ++i)
    {
        brr[i] = arr[i + 1] - arr[i];
        // cout << brr[i] << " ";
    }
    for (int i = 1; i < n; ++i)
    {
        if (i == 1 || i == 2 || i == 4 || i == 8 || i == 16)
            continue;
        else if (brr[i] < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
