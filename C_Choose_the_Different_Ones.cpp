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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    map<int, int> mp;
    map<int, int> mp2;
    for (auto &i : a)
    {
        cin >> i;
        if (i <= k)
        {
            mp[i]++;
        }
    }
    for (auto &i : b)
    {
        cin >> i;
        if (i <= k)
        {
            mp2[i]++;
        }
    }
    if (mp2.size() < k / 2 || mp.size() < k / 2)
    {
        cout << "NO" << endl;
        return;
    }
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 1; i <= k; ++i)
    {
        if (mp2[i] == 0 and mp[i])
        {
            cnt1++;
        }
        if (mp[i] == 0 and mp2[i])
            cnt2++;
        if (mp[i] and mp2[i])
            cnt3++;
    }
    if (cnt1 + cnt3 >= k / 2 and cnt2 + cnt3 >= k / 2)
    {
        ll ans = cnt1 + cnt2 + cnt3;
        if (ans >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
