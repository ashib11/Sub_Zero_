#include <bits/stdc++.h>
using namespace std;

int main()
{string a = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"; 
            // "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string s; 
    getline(cin,s); 
  
    for (int  i = 0; i < s.size(); i++)
    {
        if(s[i]==' ') cout << " "; 
        else{
            for (int j = 0; j < a.size(); j++)
            {
                if(s[i] == a[j]) cout << a[j-1] ; 
            }
            
        }
    }
    cout << endl; 
    return 0;
}