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
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int l = i, r = j, tmp = 0;

            while (1)
            {

                int cnt = 0, val = v[l];
                while (val == v[l] and r != l)
                {
                    ++l;
                    ++cnt;
                }
                while (val == v[r] and r != l)
                {
                    --r;
                    ++cnt;
                }
                
                if (cnt >= 3)
                {
                    tmp += cnt;
                }
                else if (r == l and v[r] == v[r - 1] and v[r] == x)
                {
                    tmp += 2;
                    break;
                }
                else
                {
                    tmp = 0;
                    break;
                }
            }
            ans = max(ans, tmp);
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
