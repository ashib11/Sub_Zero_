#include<bits/stdc++.h>
using namespace std;
void fastIO() {
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
}
int main()
{
fastIO() ; 
int tc;
cin >> tc; 
while(tc--) {
    int a,b; 
    cin >> a >> b; 
    cout << __gcd(a,b) << endl; 
}
return 0;
}