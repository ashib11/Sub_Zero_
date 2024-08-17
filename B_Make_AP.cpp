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
    vector<int> v(3);
    for (auto &i : v)
        cin >> i;
    int f = 2 * v[1] - v[2];
    if (f != 0 and f >= v[0] and f % v[0] == 0)
    {
        cout << "1YES" << endl;
        return;
    }
    int s = (v[0] + v[2]) / 2;
    if (s % v[1] % 2 == 0 and s != 0 and s >= v[1])
    {
        cout << "YES" << endl;
        return;
    }
    int th = (v[1] - v[0]);
    if (th != 0 and th % v[2] == 0 and th >= v[2])
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
