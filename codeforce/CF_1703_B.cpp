#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; 
    cin >> tc; 
    while (tc--)
    {
        int s; 
        cin >> s; 
        char ch; 
        int arr[30]={0}; 
        int sum =0; 
        for (int i = 0; i < s; i++)
        {
            cin >> ch; 
            arr[ch-'A']++; 
        }
        for (int i = 0; i < 26; i++)
        {
           if(arr[i]>1){
            sum+=arr[i] + 1; 
           }
           else sum+= arr[i]*2; 
        }
        cout << sum << endl; 
    }
    
return 0;
}