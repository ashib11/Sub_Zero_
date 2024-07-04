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
    int n; cin >> n; 
    if(n==1){
        cout << 1 << endl; 
        return; 
    }
    int a = 1, b = 2;
    vector<int> v;  
    for(int i =1; i <=n; ++i ){
        if(i%2){
            v.push_back(b);
            b+=2;
            
        }
        else {
            v.push_back(a);
            a+=2;
        }
    }
    if(v.back() > n){
        cout << -1 << endl; 
        return; 
    }
    for(auto it : v) 
    cout << it << ' ' ;
    cout << endl; 
    // 2 1 
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
