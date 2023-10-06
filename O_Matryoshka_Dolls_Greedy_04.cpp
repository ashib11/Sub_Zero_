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
    ll s, x; 
    cin >> s >>  x;
    ll cnt =0 ; 
    while(s!=0){
        cnt++;
        s/=x;
    }
    cout << cnt << endl; 
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