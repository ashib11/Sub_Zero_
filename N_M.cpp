#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    vector<ll> v(5); 
    for(int i =0 ; i < 5; ++i){
        cin >> v[i]; 
    } 
    sort(all(v)); 
    ll x = accumulate(v.begin(),v.end()-1,0ll); 
    ll y = accumulate(v.begin()+1, v.end(),0ll); 
    cout << x << " " << y << endl; 
}
int main()
{
    fastIO();
    int tc; 
    tc = 1; 
    while (tc--)
    {
        solve();
    }
    return 0;
}