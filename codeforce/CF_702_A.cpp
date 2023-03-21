#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    int count = 1, check = 0;
    for (int i = 1; i < s ; i++)
    {
        if (arr[i-1] < arr[i])
        {
            // cout << arr[i] << " "; 
            count++;
        }
         
        else 
        {
            if (check < count)
            check = count;
            count =1; 
        }
        // cout << count << " count ";
    }
    
    count > check? cout <<count : cout << check; 
    return 0;
}