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
    vector<int> a, b;
    map<int, bool> mp;
    for (int i = 0; i < n; ++i)
    {
        int x;
        char c;
        cin >> x >> c;
        if (c == 'L')
            a.push_back(x);
        else
            b.push_back(x);
    }
    ll cur = 0;
    if (a.size())
        cur = a[0];
    ll ans = 0;
    for (auto it : a)
    {
        ans += abs(it - cur);
        cur = it;
    }
    if (b.size())
        cur = b[0];
    for (auto it : b)
    {
        ans += abs(it - cur);
        cur = it;
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
