#include<iostream>
using namespace std;
int main()
{
int n; 
cin >> n; 
int arr[n]; 
for (int i = 0; i < n; i++)
{
   cin >> arr[i]; 
}
int count=0, max, flag =0; 
for (int i = 0; i < n-1; i++)
{
 if (arr[i]>arr[i+1])
 {
    max = count; 
    count =0; 
    flag = 1; 
 }
 if (arr[i]<=arr[i+1])
 {
    count++; 
 }
 
   
}
if ((flag == 1) && (max > count))
{
    cout << max+1 << endl ;
}
else cout << count+1 << endl; 
return 0;
}