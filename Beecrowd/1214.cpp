#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int tc; 
    cin >> tc; 
    while (tc--)
    {
        int s;
        cin >> s; 
        int arr[s]; 
        int count =0; 
        float sum =0; 
        for (int i = 0; i < s; i++)
        {
           cin >> arr[i] ;  
           sum+=arr[i] ; 
        }
        sum=sum/float(s) ; 
        for (int i = 0; i < s; i++)
        {
           arr[i]>sum? count ++ :count=count;
        }
        
        printf("%.3f%\n", count/float(s)*100); 
        
    }
    
    return 0;
}