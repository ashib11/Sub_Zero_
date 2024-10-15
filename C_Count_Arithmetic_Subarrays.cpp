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
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    ll ans = n + n-1 ;
    int l = 0;
    while (l < n)
    {
        if (l + 1 < n)
        {
            int r = l + 1;
            int dif = v[r] - v[l];
            while (r + 1 < n and v[r + 1] - v[r] == dif)
            {
                r++;
            }
            ll seg = (r - l + 1);
            ans += (seg - 1) * (seg - 2)/2;
            l = r;
        }
        else
            l++;
    }
    cout << ans << endl;
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
