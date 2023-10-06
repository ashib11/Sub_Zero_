#include <iostream>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 1; i <= test_case; i++)
    {
        int size;
        cin >> size;
        int arr[size+100];
        int higest = INT_MIN;
        int min = INT_MAX; 
        int pos; 
        for (int j = 0; j < size; j++)
        {
            cin >> arr[j];
            if (higest < arr[j])
            {
                higest = arr[j];
            }
             if (min > arr[j])
            {
                min= arr[j];
               

            }

        }
        cout << higest - min << endl ; 
    }

    return 0;
}