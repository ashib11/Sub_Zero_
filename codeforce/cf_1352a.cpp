#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num, last_digit;
    int arr[1000 + 10];

    for (int i = 0; i < n; i++)
    {
        int val = 1, count = 0, pos = 0;
        cin >> num;
        if (num > 0 && num < 10)
        {
            cout << "1" << endl
                 << num << endl;
            continue;
        }

        while (num)
        {
            last_digit = num % 10;
            num /= 10;

            if (last_digit != 0)
            {
                arr[pos] = last_digit * val;
                ++count;
                pos++;
            }
            val = val * 10;
        }
        cout << count << " " << endl;
        for (int i = 0; i < count; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}