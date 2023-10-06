#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], pos1, pos2, even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {

            even++;
            pos1 = i + 1;
        }
        else
        {

            odd++;
            pos2 = i + 1;
        }
    }

    if (even == 1)
        cout << pos1  << endl;
    else
        cout << pos2  << endl;
    return 0;
}