#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[100000]; 
int tc; 
cin >> tc; 
while (tc--)
{
    int s; 
    cin >> s; 
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i] ; 
    }
    sort(arr, arr+s); 
    int ans = unique(arr,arr+s) -(arr); 
    
    cout << ans << endl; 
}

return 0;
}