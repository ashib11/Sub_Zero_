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
// auto it = min_element(all(v));
// int indx = distance(begin(v), it); -> to get the indx 

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    vector<ll> op(m);
    for (auto &i : op)
        cin >> i;
    for (int i = 0; i < m; ++i)
    {
        auto it = min_element(all(v));
        int indx = distance(begin(v), it);
        v[indx] = op[i];
    }
    ll sum = 0;

    for (auto it : v)
        sum += it;
    cout << sum << endl;
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
