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
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    vector<ll> pre, ones;
    for (auto &i : v)
    {
        cin >> i;
        pre.push_back(i);
        if (i == 1)
            ones.push_back(1);
        else
            ones.push_back(0);
    }

    for (int i = 0; i < n; ++i)
    {

        ones[i] += ones[i - 1];

        pre[i] += pre[i - 1];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        if (l ==r )
        {
            cout << "NO" << endl;
            continue;
        }
        ll sum = pre[r];
        ll oCnt = ones[r];
        if (l > 0)
        {
            sum -= pre[l - 1];
            oCnt -= ones[l - 1];
        }
        sum -= 2 * oCnt;
        ll rem = r - l + 1 - oCnt;
        if (rem <= sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
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
