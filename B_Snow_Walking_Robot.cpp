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
    string str;
    cin >> str;
    map<int, int> mp;
    for (auto it : str)
    {
        mp[it]++;
    }
    int l = mp['L'], r = mp['R'], u = mp['U'], d = mp['D']; 
    if(l==0 or d==0 or u==0 or r==0){
        if(l and r){
            cout << "2\nLR" << endl; 
        }
        else if(u and d){
            cout << "2\nUD" << endl; 
        }
        else {
            cout << "0" << endl; 
        }
        return; 
    }
    string ans=""; 
    if(u and d){
        for(int i=0; i < min(l,r); ++i){
            ans+= 'L'; 
        }
        for(int i=0; i < min(u, d); ++i){
            ans+='U'; 
        }
        for(int i=0; i < min(l,r); ++i){ 
            ans+= 'R'; 
        }
        for(int i=0; i < min(u, d); ++i){    
            ans+= 'D'; 
        }
        cout << ans.size() << endl; 
        cout << ans << endl; 
    }
    
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