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
    string ans;
    ll mx = -1; 
    for(int i = 0; i < (int) str.size(); ++i){
        for(char j = 'a'; j <= 'z'; ++j){
            string tmp = str.substr(0, i) + j + str.substr(i); 
            ll val = 2; 
            for(int k = 1; k < (int) tmp.size(); ++k){ 
                if(tmp[k] == tmp[k-1]) val++; 
                else val += 2; 
            }
            if(val > mx){
                mx = val; 
                ans = tmp; 
            }
        }
    }
    cout << ans << endl;
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
