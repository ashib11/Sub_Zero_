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
    int n, l, r;
    cin >> n >> l >> r;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    ll sum = 0, rnd = 0;
    int p1 = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += v[i];
        if (sum > r)
        {
            while (sum > r and p1 <= i)
            {
                sum -= v[p1];
                p1++;
            }
        }
        if (sum >= l and sum <= r)
        {
            rnd++;
            sum = 0;
            p1 = i + 1;
        }
    }

    cout << rnd << endl;
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