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
    ll n, k;
    cin >> n >> k;
    vector<ll> health(n);

    map<ll, ll> mp;
    for (auto &i : health)
    {
        cin >> i;
    }

    vector<ll> pos(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> pos[i];
        ll indx = abs(pos[i]);
        mp[indx] += health[i];
        // cout << mp[indx] << ' ' << health[i] << endl;
    }
    ll st = 0;
    ll extra = 1;
    ll sum = 0;
    for (auto it : mp)
    {
        sum += it.second;
        ll day = it.first;
        ll avg = sum / k;
        if (sum % k)
            avg++;
        if (avg > day)
            extra = 0;
    }
    if (extra)
    {
        cout << "YES" << endl;
        return;
    }
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