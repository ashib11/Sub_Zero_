#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 1, 11, 4, 5, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);
    int new_arr[size + 2];
    int l =size-1; 
    int k =0; 
    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)
        {

            new_arr[i] = arr[l];
            l--;
        }
        else
        {
           new_arr[i] = arr[k];
           k++; 
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << new_arr[i] << " ";
    }

    return 0;
}