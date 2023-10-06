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
    vector<pair<int, int>> v;
    int powr = 2;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(all(v));
    for (int i = 0; i < n; ++i)
    {
        if (powr < v[i].first)
        {
            cout << "You Die here today!" << endl;
            return;
        }
        else
        {
            powr += v[i].first;
        }
    }
    cout << "Go Home" << endl;
    for (int i = 0; i < n - 1; ++i)
    {
        cout << v[i].second << " ";
    }
    cout << v[n - 1].second << endl;
}
int main()
{
    fastIO();
    int tc;
    // cin >> tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}