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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3

void solve()
{
    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll> v(n * n);
    map<ll, ll> mp;
    for (auto &it : v)
    {
        cin >> it;
        mp[it]++;
    }
    sort(all(v));
    int arr[n + 1][n + 1] = {0};
    arr[1][1] = v[0];
    for (int i = 2; i <= n; ++i)
    {
        arr[1][i] = arr[1][i - 1] + d;
    }
    for (int j = 2; j <= n; ++j)
    {
        arr[j][1] = arr[j - 1][1] + c;
    }
    for (int i = 2; i <= n; ++i)
    {
        for (int j = 2; j <= n; ++j)
        {
            arr[i][j] = arr[i][j - 1] + d;
        }
    }
    map<ll, ll> final;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            final[arr[i][j]]++;
        }
    }
    if (final == mp)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
