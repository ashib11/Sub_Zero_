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
    int n, m;
    cin >> n >> m;
    vector<ll> bats(n), bol(m);
    for (auto &i : bats)
        cin >> i;
    for (auto &i : bol)
        cin >> i;
    sort(allr(bats)), sort(allr(bol));
    if (n < 4 or m < 4 or (m + n) < 11)
    {
        cout << "-1" << endl;
        return;
    }
    ll sum = 0;
    for (int i = 0; i < 4; ++i)
    {
        sum += bats[i] + bol[i];
    }
    vector<ll> rest;
    for (int i = 4; i < n; ++i)
    {
        rest.push_back(bats[i]);
    }
    for (int i = 4; i < m; ++i)
    {
        rest.push_back(bol[i]);
    }
    sort(allr(rest));
    for (int i = 0; i < 3; ++i)
        sum += rest[i];
    cout << sum << endl;
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
