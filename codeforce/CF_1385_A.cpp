#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int arr[5];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr,arr+3); 
        if(arr[2]!=arr[1]) cout << "NO\n" ; 
        else cout <<"YES\n"<< arr[2] <<" " << "1 " << arr[0]<<endl; 
    }
    return 0;
}