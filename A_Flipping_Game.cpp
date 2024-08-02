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
    int st = 0, ed = 0;
    int mx = 0;
    for (int i = 0; i < n; ++i)
    {

        for (int j = i; j < n; ++j)
        {
            int cnt1 = 0, cnt0 = 0;
            for (int k = i; k <= j; ++k)
            {
                if (v[k] == 0)
                    cnt0++;
                else
                    cnt1++;
            }
            int dif = cnt0 - cnt1;
            if (dif > mx)
            {
                // cout << dif << ' ' << i << ' ' << j << ' ' << cnt0 << ' ' << cnt1 << endl;
                st = i;
                ed = j;
                mx = dif;
            }
        }
    }
    // cout << st << ' ' << ed << endl;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i >= st and i <= ed)
        {
            if (v[i] == 0)
                ans++;
        }
        else
        {
            if (v[i] == 1)
                ans++;
        }
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