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
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    ll cur = 0;
    for (int i = 0; i < n; ++i)
    {

        if (v[i] > 0)
        {
            cur += v[i];
            v[i] = 0;
        }
        else if (v[i] < 0 and cur)
        {
            ll tmp = v[i];
            v[i] = cur + v[i];
            v[i] = min(0ll, v[i]);
            cur += tmp;
            cur = max(0ll, cur);
        }
    }
    ll ans =0; 
    for (int i = 0; i < n; ++i)
    {
        if(v[i] < 0){
            ans+= abs(v[i]); 
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
