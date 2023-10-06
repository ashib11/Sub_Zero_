#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int s;
        cin >> s;
        int k = s;
        int arr[s];
        int narr[s];
        for (int i = 0; i < s; i++)
        {
            cin >> arr[i];
        }
        narr[0] = arr[0];
        for (int i = 1; i < s; i++)
        {
            if (i % 2 == 0)
            {
                narr[i] = arr[i / 2];
            }
            else
            {
                narr[i] = arr[k-1];
                k--;
            }
        }
        for (int i = 0; i <s; i++)
        {
            cout << narr[i] << " " ; 
        }
        cout << endl; 
    }

    return 0;
}