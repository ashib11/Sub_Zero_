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
    ll n;
    cin >> n;
    ll cnt2 = 0;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        while (x % 2 == 0)
        {
            x /= 2;
            cnt2++;
        }
    }
    if (cnt2 >= n)
    {
        cout << 0 << endl;
        return;
    }
    vector<ll> pofTwo;
    for (int i = 1; i <= n; ++i)
    {
        ll x = i;
        ll cnt = 0;
        while (x % 2 == 0)
        {
            x /= 2;
            cnt++;
        }
        pofTwo.emplace_back(cnt);
    }
    sort(allr(pofTwo));
    for (int i = 0; i < n; ++i)
    {
        cnt2 += pofTwo[i];
        if (cnt2 >= n)
        {
            cout << i+1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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
