#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc; 
cin >> tc; 
while(tc--) {
    string a; 
    cin >> a; 
    int sum = 0; 
    for (int i = 0; i < a.length(); i++)
    {
       if(a[i]=='0' || a[i]=='9' || a[i]=='6') {
            sum+= 6; 
       }
       else if(a[i]=='7') sum+=3; 
       else if(a[i]=='8') sum+=7; 
       else if(a[i]=='1') sum+=2; 
       else if(a[i]=='4') sum+=4; 
       else sum+= 5; 
    }
    cout << sum << " leds\n" ;
}
return 0;
}