#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, arr[4];
    cin >> tc; 
    while (tc--)
    {
         for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    max(arr[0], arr[1]) < min(arr[2], arr[3]) || min(arr[0], arr[1]) > max(arr[2], arr[3])? cout << "NO\n" : cout << "YES\n";
    }
    
   
    return 0;
}