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
    map<ll, ll> mp;

    int n;
    cin >> n;
    ll cnt = 0;
    ll curSum = 0;
    for (ll i = 1; i <= n; ++i)
    {
        ll x;
        cin >> x;
        curSum += x;
        curSum %= 7;

        if (curSum == 0)
            cnt = max(cnt, i + 1);
        else if (mp.find(curSum) != mp.end())
            cnt = max(cnt, i - mp[curSum]);
        else
            mp[curSum] = i;
    }
    cout << cnt << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    while (tc--)
    {
        solve();
    }
    return 0;
}
