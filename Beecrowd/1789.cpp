#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
int arr[1000]; 
while (scanf("%d", &n)!=EOF)
{
    for (int i = 0; i < n; i++)
    {
       cin >> arr[i]; 
    }
    sort(arr, arr+n); 
   arr[n-1] >=20? printf("3\n")  : arr[n-1] >=10 ?  printf("2\n") : printf("1\n"); 
    
}

return 0;
}