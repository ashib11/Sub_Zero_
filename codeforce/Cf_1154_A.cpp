#include <iostream>
using namespace std;
int main()
{
    int arr[8];
    int big = INT16_MIN;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        big = max(big, arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        if (big != arr[i])
        {
            cout << big - arr[i] << " ";
        }
    }
    return 0;
}