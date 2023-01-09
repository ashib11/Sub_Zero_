#include <iostream>
using namespace std;

int main()
{
    int size, smallest = 101, highest = 0, small_p, big_p;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= smallest)
        {
            smallest = arr[i];
            small_p = i;
        }
        if (arr[i] > highest)
        {
            highest = arr[i];
            big_p = i;
        }
    }
    int ans = big_p + (size - 1 - small_p);
    if (size%2==0)
    {
        cout << ans << endl;
    }
    else{
        cout << ans-1 << endl;
    }
    return 0;
}