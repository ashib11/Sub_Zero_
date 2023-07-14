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
    int xa,ya, xb, yb, xc, yc; 
    cin >> xa>> ya >> xb >> yb >> xc >> yc; 
    int a = abs(xa-xb)+abs(ya-yb)+1; 
    int b = abs(xa-xc)+abs(ya-yc)+1; 
    int c = abs(xb-xc)+abs(yb-yc); 
    cout<<(a+b-c)/2<<endl;
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while(t--){
        solve(); 
    }
    return 0;
}