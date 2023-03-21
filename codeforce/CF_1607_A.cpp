#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc; 
cin >> tc; 
while(tc--) {
    string a; 
    cin >> a; 
    int count =0; 
    string b; 
    cin >> b; 
    for (int i = 1; i < b.length(); i++)
    {
        count+= abs((int)a.find(b[i])-(int)a.find(b[i-1])); 
        
    }
    cout << count << endl; 
     
}
return 0;
}