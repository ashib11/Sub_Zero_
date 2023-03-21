#include<bits/stdc++.h>
using namespace std;
int main()
{
   int tc; 
   cin >> tc; 
   while (tc--)
   {
    int s; 
    cin >> s; 
    int arr[s], count=0; 
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i]; 
        if(arr[i]%2!=0) count++; 
    }
    if ((count == s && s%2==0) || (count==0))
    {
       cout  << "NO\n" ; 
    }
    else cout << "YES\n" ; 
   }
   
return 0;
}