#include <iostream>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    int size;

    for (int i = 0; i < test_case; i++)
    {
        cin >> size;
        int arr[size];
        for (int j = 0; j < size; j++)
        {
            cin >> arr[j];
        }
        if ((arr[0] != arr[1]) && (arr[1] == arr[2]))
        {
            cout << "1" << endl;
        }
        else if ((arr[size - 1] != arr[size - 2]) && (arr[size - 2] == arr[size - 3]))
        {
            cout << size << endl;
        }
        else
        {
            for (int j = 1; j < size - 1; j++)
            {

                if ((arr[j] != arr[j + 1]) && (arr[j] != arr[j - 1]))
                {
                    cout << j + 1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}