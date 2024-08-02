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
    map<ll, ll> mp;
    vector<ll> v(n);
    ll mx = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        mp[v[i]]++;
        mx = max(mx, mp[v[i]]);
    }
    if (n == 1 or mp.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll ans = mx;
    ll move = 0;
    while (ans < n)
    {
        move++;
        ll lagbe = n-ans; 
        ans += min(mx, lagbe);
        move += min(mx, lagbe);
        mx = ans;
    }
    cout << move << endl;
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
