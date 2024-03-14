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
    int n, nq;
    cin >> n >> nq;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    vector<ll> preX(n, 0);
    preX[0] = v[0];
    for (int i = 1; i < n; ++i)
    {
        preX[i] = preX[i - 1] + v[i];
    }
    while (nq--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        ll sum1 = 0, sum2 = 0, sum3 = 0;
        if (l - 2 >= 0)
            sum1 = preX[l - 2];
        sum2 = (r - l + 1) * k;
        sum3 = preX[n - 1] - preX[r - 1];
        // cout << sum1 << " " << sum2 << " " << sum3 << endl;
        ll ans = sum1 + sum2 + sum3;
        if (ans % 2)
        {
            cout << "YES" << endl;
        }
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
