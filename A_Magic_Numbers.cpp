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
#define pf push_front
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
//find_by_key(); 
//value_by_key(); 
void solve()
{
     int n, s;
    cin>>n>>s;
    if(n==1 && s==0)cout<<"0 0\n";
    else if(s==0 || s>n*9)cout<<"-1 -1\n";
    else {
        int m=n, k=s;
        deque<int>v;
        while(m--){
            if(s<=9 && m==0)v.pf(s);
            else if(s==1){v.pf(0);continue;}
            else if(s>9)v.pf(9),s-=9;
            else v.pf(s-1),s=1;
        }
        for(int i:v)cout<<i;
        cout<<" ";
        while(n--){
            if(k>=9)cout<<9,k-=9;
            else cout<<k,k-=k;
        }
 
    }
}
int main()
{
    fastIO();
    int tc;
    // cin >> tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}
