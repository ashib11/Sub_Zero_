#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int l;
        cin >> l;
        int arr[2 * l];
        for (int i = 0; i < 2 * l; i++)
        {
            cin >> arr[i];
        }
        cout << arr[0] << " ";
        for (int i = 1; i < 2 * l; i++)
        {
            int flag =0; 
            for (int j = 0; j < i; j++)
            {
                if (arr[i] == arr[j])
                {
                    flag = 1; 
                    break;
                }
            }
            if(flag ==0 ) cout << arr[i] << " " ; 
         }
         printf("\n") ;
    }
    return 0;
}