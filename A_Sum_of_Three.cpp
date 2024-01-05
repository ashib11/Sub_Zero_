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
// find_by_key();
// value_by_key();
void solve()
{
    int n;
    cin >> n;
    if( n < 7 or n == 9){
        cout << "NO" << endl; 
        return; 
    }
    cout << "YES" << endl; 
    if(n%3!=0)
        cout << 1 <<  " " << 2 <<  " " << n-3 << endl; 
    else cout << 1 << " " << 4 << " " << n-5 << endl; 
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
