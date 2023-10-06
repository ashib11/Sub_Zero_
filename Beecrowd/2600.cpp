#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        int arr[6];
        bool check = true;
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
            if (arr[i] < 1 || arr[i] > 6)
            {
                check = false;
            }
        }
        if (check)
        {
            for (int i = 0; i < 5; i++)
            {
                for (int j = i + 1; j < 6; j++)
                {
                    if (arr[i] == arr[j])
                    {
                        check = false;
                        break;
                    }
                }
            }
        }
        if (check)
        {
            if (arr[0] + arr[5] == 7 && arr[1] + arr[3] == 7 && arr[2] + arr[4] == 7)
            {
                cout << "SIM\n";
            }
            else
                cout << "NAO\n";
        }
        else
            cout << "NAO\n";
    }

    return 0;
}