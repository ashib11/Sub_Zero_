#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc, nMonsters;
cin >> tc; 
for (int i = 0; i < tc; i++)
{
    cin >> nMonsters; 
    int arr[nMonsters]; 
    for (int j = 0; j < nMonsters; j++)
    {
        cin >> arr[j]; 
    }
    sort(arr,arr+nMonsters); 
    int count =0; 
     for (int j = 0; j < nMonsters; j++)
    {
        arr[j]-=1; 
        arr[j+1]-=1; 
        j++; 
        count ++; 
    }
    cout << count << endl; 
}

return 0;
}