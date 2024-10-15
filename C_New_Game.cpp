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
    map<ll, ll> mp;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    vector<pair<ll, ll>> vp;
    for (auto [a, b] : mp)
    {
        vp.push_back({a, b});
    }
    ll lst = -1, cur=0, mx=0, st=0, st_val=0; 
    for(int i=0; i < vp.size(); ++i){
        if(vp[i].first != lst + 1){
            st = vp[i].first;
            st_val = vp[i].second;  
            cur = vp[i].second; 
        }
        else {
            if(vp[i].first - st + 1 > k){
                cur-= st_val; 
            }
            cur+= vp[i].second;
        }
        lst = vp[i].first; 
        mx = max(mx, cur); 
    }
    cout << mx << endl; 
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
