#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc; 
cin >> tc; 
while(tc--) {
    int count =0; 
    int a,b,n; 
    cin >> a >> b  >> n  ; 
    while(a<=n && b <=n) {
        a<b ? a+=b : b+=a; 
        count ++; 
    }
    cout << count << endl; 
}
return 0;
}