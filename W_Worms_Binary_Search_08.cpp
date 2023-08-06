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
    int n; 
    cin >> n; 
    vector<int> v(n); 
    cin >> v[0]; 
    for(int i =1 ; i < n; ++i){
        cin >> v[i];
        v[i]+= v[i-1]; 
    }
    int nq; 
    cin >> nq; 
    while(nq--) {
        int x; 
        cin >> x ; 
        auto ans = lower_bound(v.begin(), v.end(),x) - v.begin(); 
        cout << ans+1 << endl; 
    }
}
int main()
{
    fastIO();
    int tc = 1; 
    while(tc--){
        solve();
    }
    return 0;
}