#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, n;
    long long int arr[100];
    long long int brr[100];
    long long int mina ;
    long long int minb ;
    long long int sum = 0;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        sum = 0;
        mina = 1000000000;
        minb = 1000000000;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (mina > arr[i])
            {
                mina = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
 
            if (minb > brr[i])
                minb = brr[i];
        }
 
        for (int i = 0; i < n; i++)
        {
            sum+=max(arr[i]-mina,brr[i]-minb);
        }
        cout << sum << endl;
    }
 
    return 0;
}