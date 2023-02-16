#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int test_case, a, b;
    cin >> test_case;
    int j = 0, count = 0;
    for (int i = 0; i < test_case; i++)
    {
        j = 0, count = 0;
        cin >> a >> b;
        while (1)
        {
          
            if (a == b)
            {
                cout << count << endl;
                break;
            }
            else if (a - b > 0)
            {
                if (a - b >= arr[j])
                {
                    a = a - arr[j];
                    count++; 
                }
                else
                {
                    j++;
                }
            }
            else if (a - b < 0)
            {
                if (abs(a - b) >= arr[j])
                {
                    a = a + arr[j];
                    count++; 
                }
                else
                {
                    j++;
                }
            }
        }
    }

    return 0;
}