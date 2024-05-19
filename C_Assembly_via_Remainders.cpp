#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    int t; 
    cin >> t; 
 
    while(t--) 
    { 
        int n, x = -1, y; 
        cin >> n; 
         
        int a[n-1]; 
 
        for(int i = 0; i < n - 1; i++) 
        { 
            cin >> a[i]; 
            if(a[i] > x ) 
                x = a[i] ; 
        } 
        x+=1; 
        cout << x << " "; 
 
        for(int i = 0; i < n - 1; i++) 
        { 
            cout << x + a[i] << " "; 
            x += a[i]; 
        } 
 
        cout << endl; 
    } 
 
    return 0; 
}