#include <iostream>
using namespace std;

int arr[2000];
int k = 1;

int main()
{
    int test_case;
    cin >> test_case;
    for (int i = 1; i < 1700; i++)
    {
        if ((i % 3 != 0) && (i % 10 != 3))
        {
            arr[k] = i;
           
            k++;
        }
    }
    int n;

    for (int i = 0; i < test_case; i++)
    {
        cin >> n;
        cout << arr[n] << endl;
    }

    return 0;
}