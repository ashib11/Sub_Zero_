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
struct triplet
{
    ll x, y, gcd; 
};
triplet extendedEuclid(ll x, ll y){
    if(y ==0){
        triplet ans; 
        ans.x = 1;
        ans.gcd = x;
        ans.y = 0; 
        return ans;  
    }
    triplet smalAns = extendedEuclid(y, x%y); 
    triplet ans; 
    ans.gcd = smalAns.gcd; 
    ans.x = smalAns.y; 
    ans.y = smalAns.x - (x/y)*smalAns.y; 
    return ans; 
}
void solve()
{
    ll a, b; 
    cin >> a >> b;
   triplet ans = extendedEuclid(a,b); 
   cout << ans.x << " " << ans.y << " " << ans.gcd << endl; 
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
