#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc; 
cin >> tc; 
while(tc--) {
    int s; 
    cin >> s; 
    int arr[s]; 
    int min =10000001; 
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i]; 
        min>arr[i]? min = arr[i]:min=min;
    }
    int sum =0; 
    for (int i = 0; i < s; i++)
    {
        sum+=arr[i] - min; 
    }
    cout << sum << endl; 
}
return 0;
}