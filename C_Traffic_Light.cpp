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
    int n;
    char x;
    cin >> n >> x;
    string str;
    cin >> str;
    vector<ll> v[26];
    for (int i = 0; i < n; ++i)
        v[str[i] - 'a'].push_back(i);
    ll ans = -1;
    for (int i = 0; i < v[x - 'a'].size(); ++i)
    {
        ll val_indx = lower_bound(all(v['g' - 'a']), v[x - 'a'][i]) - v['g' - 'a'].begin();
        if (val_indx >= v['g' - 'a'].size())
        {
            ll a = n - v[x - 'a'][i];
            a += v['g' - 'a'].front();
            ans = max(ans, a);
        }
        else
        {
            ans = max(ans, v['g' - 'a'][val_indx] - v[x - 'a'][i]);
        }
    }
    cout << ans << endl;
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
