#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = a;
    for (int i = 1;; i++)
    {

        if ((sum % 10 == b) || (sum % 10 == 0))
        {
            cout << i << endl;
            break;
        }
        else
        {
            sum += a;
        }
    }
    return 0;
}