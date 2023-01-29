#include<bits/stdc++.h>
using namespace std;
int main()
{
int test_case; 
cin >> test_case; 
for (int i = 0; i < test_case; i++)
{
    int size; 
    cin >> size; 
    int arr[size]; 
    for (int j = 0; j < size; j++)
    {
        cin >> arr[j]; 
    }
    sort(arr,arr+size); 
    int dif; 
    int min = INT_MAX; 
    for (int j = 0; j < size-1;j++)
    {
        dif = arr[j+1] - arr[j]; 
        if(dif<min){
            min = dif; 
        }
    }
    cout << min << endl; 
}

return 0;
}