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
    int x,y; cin >> x >> y; 
    int ans = y/2; 
    if(y%2) ans++; 
    int left = (ans*15)-(y*4); 
    // cout << left << endl; 
    if(x > left){
        x-=left; 
        x = max(0, x); 
        int ans2 = x/15; 
        if(x%15) ans2++; 
        ans+=ans2; 
    }
    cout << ans<< endl; 
   
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
