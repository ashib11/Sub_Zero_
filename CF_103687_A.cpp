#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int a, b;
        cin >> a >> b;
        int dif = b - a;
        if (dif < 0)
        {
            if (dif % 2 == 0)
            {
                cout << "1\n";
            }
            else
            {
                cout << "2\n";
            }
        }
        else if (dif > 0)
        {
            if (dif % 2 != 0)
            {
                cout << "1\n";
            }
            else
                cout << "3\n";
        }
        else
            cout << "0\n";
    }

    return 0;
}