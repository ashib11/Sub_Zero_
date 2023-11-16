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
    vector<ll> v(n);
    set<int> s;
    for (auto &i : v)
    {
        cin >> i;
        s.insert(i);
    }
    if (v.size() == 1 || s.size() == 1)
    {
        if (v[0] % 2 == 0)
        {
            cout << "CHEFINA" << endl;
            return;
        }
        else
        {
            cout << "CHEF" << endl;
            return;
        }
    }
    sort(all(v));
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += v[i];
    }
    if (n % 2 != 0)
    {
        if (sum % 2 != 0)
        {
            cout << "CHEF" << endl;
        }
        else
            cout << "CHEFINA" << endl;
        return;
    }
    // cout << sum << endl;
    else
    {
        if (sum % 2 != 0 || v[0] % 2 != 0)
        {
            cout << "CHEF" << endl;
        }
        else
            cout << "CHEFINA" << endl;
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
