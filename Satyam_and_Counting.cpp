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
    vector<pair<int, int>> vp(n);
    map<int, int> mp, mp2;
    for (auto &[a, b] : vp)
    {
        cin >> a >> b;
        mp[a]++;
        mp2[b]++;
    }
    bool f = false;
    ll ans = 0;
    for (auto [a, b] : vp)
    {
        ans += (mp[a] - 1) * (mp2[b] - 1);
        if (ans)
            f = true;
    }
    ans += f;
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
