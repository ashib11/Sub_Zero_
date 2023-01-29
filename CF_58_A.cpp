#include<iostream>
using namespace std;
int main()
{
string a,h="hello"; 
cin >> a; 
int j=0,count=0; 
for (int i = 0; i <a.size(); i++)
{
    if (a[i]==h[j])
    {
        j++;
        count++;  

    }
    
}
if (count == 5)
{
    cout << "YES\n"; 
}
else cout << "NO\n"; 
return 0;
}