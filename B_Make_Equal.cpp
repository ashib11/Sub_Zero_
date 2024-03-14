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
    ll sum = 0;
    vector<ll> v(n);
    for (auto &i : v)
    {
        cin >> i;
        sum += i;
    }
    if (sum % n)
    {
        cout << "NO" << endl;
        return;
    }
    sum /= n;
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    ll extra = 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] >= sum)
        {
            extra += v[i] - sum;
        }
        else
        {
            // cout << extra << endl; 
            extra -= (sum - v[i]);
            // cout << extra << endl; 
            if (extra < 0)
            {
                // cout << i << endl ; 
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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
