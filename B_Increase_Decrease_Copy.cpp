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
    vector<int> v(n), v1(n + 1);
    for (auto &i : v)
    {
        cin >> i;
    }
    for (auto &i : v1)
    {
        cin >> i;
    }
    ll target = v1[n];
    bool pos = false;
    ll ans = 0;
    ll mn = 1e18;
    for (int i = 0; i < n; ++i)
    {
        if (min(v[i], v1[i]) <= target and max(v[i], v1[i]) >= target)
        {
            pos = true;
        }
        mn = min(abs(v[i] - target), mn);
        mn = min(abs(v1[i] - target), mn);
        ans += abs(v[i] - v1[i]);
    }
    if (pos)
        ans++;
    else
    {
        ans += mn;
        ans++;
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
