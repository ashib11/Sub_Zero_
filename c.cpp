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
    int a, b;
    cin >> a >> b;
    int N = 1e4 + 10;
    vector<int> v(N, 0);
    vector<int> all_el;
    int mx = -1;
    int mn = INT_MAX;
    while (n--)
    {
        int x;
        cin >> x;
        all_el.push_back(x);
    }
    sort(all(all_el));
    for(auto it : all_el) 
    cout << it << " " ; 
    // for (int i = 0; i < all_el.size(); ++i)
    // {
    //     v[all_el[i]] = v[all_el[i] - 1] + 1;
    // }
    // ll cnt = 0;
    // for (int i = 0; i < all_el.size(); ++i)
    // {
    //     int lw_lim = a - all_el[i];
    //     int up_lim = b - all_el[i];

    //     if (up_lim <= 0 || lw_lim < 0)
    //         break;
    //     // cout << lw_lim << " " << up_lim << " " << v[up_lim] - v[all_el[i]] << endl;
    //     cnt += v[up_lim] - v[all_el[i]]; 
    //     // cout << cnt << endl;
    // }
    // cout << cnt << endl;
    cout << endl; 
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
