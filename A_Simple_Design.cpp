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
int sum(ll &n)
{
    string temp = to_string(n);
    int sz = temp.size();
    ll ck = 0;
    for (auto it : temp)
    {
        ck += (it - '0');
    }
    return ck;
}
void solve()
{
    ll x, k;
    cin >> x >> k;

    if (sum(x) % k == 0)
    {
        cout << x << endl;
        return;
    }
    while (1)
    {
        if (sum(x) % k == 0)
        {
            cout << x << endl;
            return;
        }
        else
            x++;
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
