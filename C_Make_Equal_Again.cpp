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
        cin >> i;
    int st = 0, ed = n - 1;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < n; ++i)
    {
        if (v[i] == v[0])
            ++st;
        else
            break;
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (v[i] == v[n - 1])
            --ed;
        else
            break;
    }
    if (v[0] != v[n - 1])
    {
        cout << min(ed + 1, n - st) << endl;
        return;
    }
    cout << max(0, ed - st + 1) << endl;
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
