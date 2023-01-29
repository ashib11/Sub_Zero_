#include<bits/stdc++.h>
using namespace std;
int main()
{
int l; 
cin >> l; 
int arr[l]; 
for (int i = 0; i < l; i++)
{
    cin >> arr[i]; 
}
sort(arr,arr+l); 
for(int i=0; i< l; i++){
    cout << arr[i] << " "; 
}
return 0;
}