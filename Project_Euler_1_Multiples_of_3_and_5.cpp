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
void solve( ) {
    ll n; 
    cin >> n; 
    int l1 = (n-1)/3; 
    int l2 =(n-1)/5; 
    int l3 = (n-1)/15; 
   
    // cout << l1 << " " << l2 << " " << l3 << endl;
    ll ans = 3*l1*(l1+1)/2 + 5*l2*(l2+1)/2 - 15*l3*(l3+1)/2; 
    cout << ans  << endl; 

}
int main()
{
    fastIO();
    int tc;
    cin >> tc; 
    while(tc--) solve() ; 
    return 0;
}