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

int n, l, r, d;
void sbst_gen(vector<int> &v)
{
    int ans = 0;
    int limit = (1 << n);
    for (int i = 0; i < limit; ++i)
    {
        vector<int> tmp;
        int sum = 0;
        for (int j = 0; j < n; ++j)
        {
            if (i & (1 << j))
            {
                sum += v[j];
                tmp.push_back(v[j]);
            }
        }
        sort(all(tmp));
        if (sum >= l and sum <= r and tmp.back() - tmp[0] >= d)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
void solve()
{
    cin >> n >> l >> r >> d;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sbst_gen(v);
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
