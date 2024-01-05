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
const int M = 1e6 + 10;
vector<ull> ans(M);
ull lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

void precal()
{
    ans[1] = 1;
    ll tmp = 1;
    for (ll i = 2; i < M; ++i)
    {
        tmp = lcm(tmp, i);
        ans[i] = tmp;
        // cout << ans[i] << endl;
    }
}
void solve()
{
    int n;
    while (1)
    {
        cin >> n;
        if (!n)
            return;
        ll p = ans[n];
        string yo = to_string(p);
        int sz = yo.size();
        // cout << yo << endl;
        for (int i = sz - 1; i >= 0; --i)
        {
            if (yo[i] != '0')
            {
                cout << yo[i] << endl;
                break;
            }
        }
    }
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    precal();
    while (tc--)
    {
        solve();
    }
    return 0;
}
