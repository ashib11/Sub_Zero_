#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    int max = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += max - arr[i];
    }
    cout << sum << "\n";
    return 0;
}