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
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    map<int, bool> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        mp[i] = true; 
    }
    ll sum = accumulate(all(v), 0ll);
    ll cur = 0;
    while (k--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int indx, val;
            cin >> indx >> val;
            indx--;
            if (mp[indx] == false)
            {
                sum -= cur;
                sum+= val; 
                v[indx] = val; 
                mp[indx] = true; 
            }
            else
            {
                sum -= v[indx];
                sum += val;
                v[indx] = val;
            }
        }
        else
        {
            ll val;
            cin >> val;
            sum = 1ll *val * n;
            cur = val;
            mp.clear();
        }
        std:: cout << sum << endl;
    }
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
