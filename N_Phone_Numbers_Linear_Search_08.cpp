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
    int cnt =0 ; 
    char ch;
    for(int i =0 ; i < n ; ++i) {
        cin >>ch ;
        if(ch == '8') cnt++; 
    }
    cout << min(cnt, (n/11)) << endl;

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