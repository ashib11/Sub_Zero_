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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3

void solve()
{
    int n = 3;
    vector<string> v(n);
    for(auto &i : v) cin >> i; 
    for(int i=0; i < n; ++i){
        for(int j=0; j <(int) v[i].size(); ++j){
            if(v[i][j]=='='){
                for(int k = j+1; k < v[i].size(); ++k){
                    if(v[i][k]=='A' or v[i][k]== 'H' or v[i][k] == 'T' or v[i][k]== 'P'){
                        cout << v[i][k] << endl; 
                        return; 
                    }
                }
            }
        }
    }
    cout << "You shall pass!!!" << endl; 
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
