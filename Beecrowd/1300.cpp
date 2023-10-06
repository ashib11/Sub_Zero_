#include<bits/stdc++.h>
using namespace std;
void fastIO() {
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
}
int main()
{
fastIO() ; 
int n; 
while(cin >> n) {
    n%6==0? cout << "Y\n" : cout << "N\n"; 
}
return 0;
}