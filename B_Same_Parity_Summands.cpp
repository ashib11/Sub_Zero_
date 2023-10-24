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
    ll n, k;
    cin >> n >> k;
    bool even = false, odd = false;
    vector<ll> ans;
    for (int i = 1; i < k; ++i)
    {
        ans.push_back(2);
    }
    if ((n - ((k - 1) * 2)) % 2 == 0 && (n - ((k - 1) * 2)) > 0)
    {
        even = true;
        ans.push_back(n - ((k - 1) * 2));
    }
    else
    {
        ans.clear();
    }
    if (even)
    {
        cout << "YES" << endl;
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    ans.clear();
    for (int i = 1; i < k; ++i)
    {
        ans.push_back(1);
    }
    if (((n - ((k - 1))) % 2) != 0 && (n - ((k - 1))) > 0)
    {
        odd = true;
        ans.push_back(n - ((k - 1) * 1));
    }
    if (odd)
    {
        cout << "YES" << endl;
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    cout << "NO" << endl;
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
