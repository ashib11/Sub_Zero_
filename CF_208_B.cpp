#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    
    for (int i = 0; i <a.size() ; i++)
    {
        if ((a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B'))
        {
            a[i] = 0;
            a[i + 1] = 0;
            a[i + 2] = 0;
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]!=0){
            cout << a[i];
            if (a[i+1]==0)
            {
               printf(" "); 
            }
            
        }  
    }
    printf("\n"); 
    return 0;
}