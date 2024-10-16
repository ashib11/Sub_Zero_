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
ll nsum(ll n){
    return n*(n-1)/2ll; 
}
bool chck(ll mid, ll n){
    return nsum(mid) <= n; 
}
void solve()
{
   ll n; cin >> n; 
   ll l = 1, h = 2e9; 
   while(l <= h){
        ll mid = (l+h)/2; 
        if(chck(mid, n)){
            l = mid+1; 
        }
        else h = mid-1; 
   }
   ll extra = n - nsum(h); 
   h+=extra;
   cout << h << endl;  
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
