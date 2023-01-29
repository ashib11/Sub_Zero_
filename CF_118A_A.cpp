#include <iostream>
using namespace std;
string v = "aoyeui";
int main()
{
    string a;
    cin >> a;
    int len;
    len = a.size();
    for (int i = 0; i < len; i++)
    {
        if (a[i]>='A' && a[i]<='Z')
        {
            a[i] = tolower(a[i]); 
        }
        
        for (int j = 0; j < 6; j++)
        {
            if (a[i] == v[j])
            {
                a[i] = '.'; 
            }
            
        }
        
    }
    for (int i = 0; i < len; i++)
    {
        if (a[i]!='.')
        {
            cout<<"."<<a[i];
        }
        
    }
    
cout << "\n";
    return 0;
}