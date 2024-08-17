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
    vector<pair<int, int>> vp(2);
    for (auto &i : vp)
    {
        cin >> i.first >> i.second;
    }
    sort(all(vp));

    if (vp[0].first == vp[1].first and vp[0].second == vp[1].second)
    {
        cout << abs(vp[0].first - vp[0].second) << endl;
        return;
    }
    if (vp[1].first > vp[0].second or vp[1].second < vp[0].first)
    {
        cout << 1 << endl;
        return;
    }
    map<int, int> mp;
    // cout << vp[0].first << ' ' << vp[0].second << endl;
    for (int i = vp[0].first; i <= vp[0].second; ++i)
    {
        mp[i]++;
    }

    for (int i = vp[1].first; i <= vp[1].second; ++i)
    {
        mp[i]++;
    }
    int ans = 0;
    int frst = -1, lst = -1;
    for (auto [a, b] : mp)
    {
        if (b == 2)
        {
            ans++;
            if (frst == -1)
            {
                frst = a;
            }
            else
                lst = a;
        }
    }
    // cout << ans << endl;
    int L = max(vp[0].first, vp[1].first);
    int l = min(vp[0].first, vp[1].first);
    int r = min(vp[0].second, vp[1].second);
    int R = max(vp[0].second, vp[1].second);
    if (l < frst)
    {

        ans++;
    }
    if (R > lst)
        ans++;
    cout << ans-1 << endl;
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
