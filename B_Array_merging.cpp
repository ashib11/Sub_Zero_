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
    vector<int> a(n), b(n);
    map<ll, ll> ma, mb;
    for (auto &i : a)
    {
        cin >> i;
        ma[i] = 1;
    }
    for (auto &i : b)
    {
        cin >> i;
        mb[i] = 1;
    }
    vector<int> frea(n + 1, 1), freb(n + 1, 1);

    for (int i = 1; i < n; ++i)
    {
        if (a[i] == a[i - 1])
        {
            frea[i] = frea[i - 1] + 1;
            ma[a[i]] = max(ma[a[i]], (ll)frea[i]);
        }
    }
    for (int i = 1; i < n; ++i)
    {
        if (b[i] == b[i - 1])
        {
            freb[i] = freb[i - 1] + 1;
            mb[b[i]] = max(mb[b[i]], (ll)freb[i]);
        }
    }
    ll ans = 0;
    for (auto [k, val] : ma)
    {
        ans = max(ans, (ma[k] + mb[k]));
    }
    for (auto [k, val] : mb)
    {
        ans = max(ans, (ma[k] + mb[k]));
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