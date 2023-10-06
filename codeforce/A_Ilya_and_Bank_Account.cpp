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
void solve(){
    string a; 
    cin >> a; 
    string ans = ""; 
    if(a[0]!='-'){
      
       cout << a.substr(0,(int)(a.size()))<< endl; 
    }
    else {
        ans = a.substr(0,(int)(a.size()-2)); 
        if(a[a.size()-1]>a[a.size()-2]) ans+= a[a.size()-2] ; 
        else ans+= a[a.size()-1] ; 
        if(ans == "-0") ans = "0"; 
        cout << ans << endl; 
    }
}
int main()
{
    fastIO();
    solve(); 
    return 0;
}