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
    int n; 
    cin >> n; 
    long long ans=0; 
    for (int i = 0; i < n; i++)
    {
        ans+=pow(2,i); 
    }
    cout << ans <<"\n"; 
}
return 0;
}