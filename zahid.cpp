#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[6], b[6];
    cout << "Enter the elements of Array 1:\n";
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the elements of Array 2:\n";
    for (int i = 0; i < 6; i++)
    {
        cin >> b[i];
    }
    int l =0; 
    int pos[1000] = {0}; 
    cout << "The common characters are " ; 
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
           if(a[i]==b[j]){
            pos[l] = i; 
            l++; 
           }
        }
        
    }
    for (int i = 0; i < l; i++)
    {
        if(i==l-1) 
        cout << "and " ; 
        cout << a[pos[i]]<< " "; 
    }
    
    return 0;
}