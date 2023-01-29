#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int a, b;
    cin >> a >> b;
    int c =ceil(a/2.0) ;
    cout << c << endl; 
    if(c>=b){
        int ans = b + (b-1); 
        cout <<"first"<<  ans << endl; 
    }
   else {
    int ans = (b-4) + (b-6); 
    cout << ans << endl; 
   }
    
    return 0;
}