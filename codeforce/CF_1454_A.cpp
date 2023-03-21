#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc; 
cin >> tc;
while (tc--)
{
    int a; 
    cin >> a; 
    int arr[a+10]; 
    for(int i =0; i<a; i++)
    
    {
        arr[i] = a-i; 
    }
    if (a%2!=0)
    {
        int temp = arr[(a/2)]; 
        arr[(a/2)]=arr[(a/2-1)] ;
        arr[(a/2)-1] = temp; 
    }
    for (int i = 0; i <a ; i++)
    {
       cout << arr[i] << " "; 
    }
    cout << endl; 
}

return 0;
}