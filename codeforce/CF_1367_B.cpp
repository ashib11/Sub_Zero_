#include <iostream>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    int n;
    int arr[1000];
    while(test_case--)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int even = 0, odd = 0;
        for (int j = 0; j < n; j++)
        {
            if ((j % 2 != arr[j] % 2))
            {
                if (arr[j] % 2 == 1)
                {
                    odd++;
                }
                else
                    even++;
            }
        }
        if (odd !=even)
        {
            cout << -1 << endl;
        }
        else
            cout << even << endl;
    }
 
    return 0;
}