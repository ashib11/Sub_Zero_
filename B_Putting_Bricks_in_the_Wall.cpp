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
    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;
    vector<pair<int, int>> vp;
    if (v[0][1] == v[1][0])
    {
        if (v[n - 1][n - 2] == v[0][1])
            vp.push_back({n, n - 1});
        if (v[n - 2][n - 1] == v[0][1])
            vp.push_back({n - 1, n});
    }
    else if (v[n - 1][n - 2] == v[n - 2][n - 1])
    {
        if (v[0][1] == v[n - 1][n - 2])
            vp.push_back({1, 2});
        if (v[1][0] == v[n - 1][n - 2])
            vp.push_back({2, 1});
    }
    else
    {
        if (v[0][1] == '0')
            vp.push_back({1, 2});
        else if (v[1][0] == '0')
            vp.push_back({2, 1});
        if (v[n - 1][n - 2] == '1')
            vp.push_back({n, n - 1});
        else if (v[n - 2][n - 1] == '1')
            vp.push_back({n - 1, n});
    }
    cout << vp.size() << endl;
    for (auto [a, b] : vp)
    {
        cout << a << ' ' << b << endl;
    }
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
