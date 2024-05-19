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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll tsum = 0;
    for (auto &i : v)
    {
        cin >> i;
        tsum += i;
    }
    if (tsum <= k)
    {
        cout << n << endl;
        return;
    }
    int i = 0, j = n - 1;
    ll ans = 0;
    while (k and (i < j))
    {
        if (k >= (2 * min(v[i], v[j])))
        {
            ans++;
            k -= 2 * min(v[i], v[j]);
            if (v[i] < v[j])
            {
                v[j] -= v[i];
                ++i;
            }
            else if (v[i] == v[j])
            {
                ++i, --j, ++ans;
            }
            else
            {
                v[i] -= v[j];
                --j;
            }
        }
        else if ((k + 1) == (2 * min(v[i], v[j])) and v[i] <= v[j])
        {
            ans++;
            break;
        }
        else
            break;
    }
    cout << ans << endl;
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
