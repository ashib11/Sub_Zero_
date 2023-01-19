#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case, size;
    cin >> test_case;
    for (int k = 0; k < test_case; k++)
    {

        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + size);
         int check = 1;
        for (int j = size - 1; j > 0; j--)
        {
            if (arr[j] - arr[j - 1] > 1)
            {
                check = 0;
                break;
            }
        }
        if (check==1)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";

        
    }

    return 0;
}