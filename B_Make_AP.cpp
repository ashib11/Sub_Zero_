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
    vector<ll> v(3);
    for (auto &i : v)
        cin >> i;
    ll x = abs(v[0] - v[1]), y = abs(v[0] - v[2]), z = abs(v[1] - v[2]);
    auto it = find(all(v), x);
    auto it1 = find(all(v), y);
    auto it2 = find(all(v), z);
    if (it != v.end() || it1 != v.end() || it2 != v.end())
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
