#include <iostream>
using namespace std;
int main()
{
    int test_case, a, b;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        cin >> a >> b;
        if (a == b)
        {
            cout << "0" << endl;
        }
        else if (abs(a - b) % 10 == 0)
        {
            cout << abs(a - b) / 10 << endl;
        }
        else
            cout << abs(a - b) / 10 + 1 << endl;
    }

    return 0;
}