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
    int n, m;
    cin >> n >> m;
    map<string, int> mp;
    for (int i = 0; i < n; ++i)
    {
        string a;
        cin >> a;
        mp[a] = i;
    }
    vector<int> v(n, 0);
    while (m--)
    {
        string a;
        cin >> a;
        v[mp[a]] = 1;
    }
    for (auto it : v)
    {
        
        if (it)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
