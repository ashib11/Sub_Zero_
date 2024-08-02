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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    vector<ll> ans(n);
    ans[0] = k * b;
    s -= (k * b);

    ll val = min(s, k - 1);
    s -= val;
    ans[0] += val;
    for (int i = 1; i < n; ++i)
    {
        ll val = min(s, k - 1);
        ans[i] = val;
        s -= val;
    }
    ll check = 0;

    if (s)
    {
        cout << "-1" << endl;
        return;
    }
    for (auto it : ans)
    {
        check += (it / k);
    }
    if (check != b)
    {
        cout << "-1" << endl;
        return;
    }

    for (auto it : ans)
    {
        cout << it << ' ';
    }
    cout << endl;
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
