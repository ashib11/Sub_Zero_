#include <bits/stdc++.h>
using namespace std;
int main()
{
    int card_number;
    cin >> card_number;
    int arr[card_number];
    for (int i = 0; i < card_number; i++)
    {
        cin >> arr[i];
    }
    int s = 0, d = 0;
    int left = 0;
    int right = card_number - 1;
    for (int i = 0; i < card_number; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[left] >= arr[right])
            {
                s += arr[left];

                left++;
            }
            else if (arr[left] < arr[right])
            {
                s += arr[right];

                right--;
            }
        }
        else
        {
            if (arr[left] >= arr[right])
            {
                d += arr[left];

                left++;
            }
            else if (arr[left] < arr[right])
            {
                d += arr[right];

                right--;
            }
        }
    }
    cout << s << " " << d << endl;
    return 0;
}