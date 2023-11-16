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
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    for (int i = n - 1; i >= 1; --i)
        if (v[i - 1] > v[i])
            v[i - 1]--;
    for (int i = 1; i < n; ++i)
        if (v[i] < v[i - 1])
        {
            cout << "No" << endl;
            return;
        }
    cout << "Yes" << endl;
}
int main()
{
    fastIO();
    int tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}
