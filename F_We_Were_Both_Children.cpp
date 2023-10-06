#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve() {
    int n; 
    cin >> n; 
    vector<int> v(n+1,0) ; 
    for(int i =0 ; i < n; ++i) {
        int a; 
        cin >> a ; 
        if(a<=n){
            v[a]++; 
        }
    }
    for(int i = n ; i>=1 ; i--) {
        for(int j = 2*i ; j <= n ; j+=i){
             v[j]+=v[i]; 
        }
    } 
    auto ans = *max_element(v.begin(), v.end()); 
    cout << ans << endl; 
}
int main()
{
    fastIO();
    int tc; 
    cin >> tc; 
    while(tc--) solve() ; 
    return 0;
}