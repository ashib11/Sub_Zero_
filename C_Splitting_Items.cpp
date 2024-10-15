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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    sort(allr(v));
    for (int i = 1; i < n; i+=2)
    {
        ll dif = v[i-1] - v[i];
        ll mn = min(dif, k);
        v[i] += mn;
        k -= mn;
        if (k <= 0)
            break;
        if (i >= n - 1)
            break;
    }

    ll odsum = 0, evsum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2)
            odsum += v[i];
        else
            evsum += v[i];
    }
    cout << abs(odsum - evsum) << endl;
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
