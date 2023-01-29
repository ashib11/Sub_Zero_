#include<iostream>
using namespace std;
int main()
{
string a;
cin >> a;
int flag=0;  
for (int i = 0; i < a.size(); i++)
{
    if (a[i]=='H' || a[i]=='Q' || a[i]== '9')
    {
        flag = 1; 
        cout << "YES\n"; 
        break; 
    }
    
}
if (flag == 0)
{
    cout << "NO\n"; 
}

return 0;
}