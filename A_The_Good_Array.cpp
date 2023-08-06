#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(),v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve(){
        int n, k; 
        cin >> n >> k; 
        cout << 2+((n-2)/k) << endl; 
}
int main()
{
    fastIO();
    int tc;
    cin >> tc; 
    while(tc--){
        solve();
    }
    return 0;
}