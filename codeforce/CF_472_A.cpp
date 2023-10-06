#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {

        int a = (n / 2);
        int b = (n / 2);
        while (1)
        {
            if ((a % 2 == 0 || a % 3 == 0) && ((b % 2 == 0) || (b % 3 == 0)))
            {
                break;
            }

            else if ((a % 2 != 0) || (a % 3 != 0))
            {
                a--;
                b++;
            }
            else if ((b % 2 != 0) || (b % 3 != 0))
            {
                a--;
                b++;
            }
        }
        cout << a << " " << b << endl;
    }
    else
    {
        int a = (n / 2) ;
        int b = (n / 2) + 1;
        while (1)
        {
            
            if (a < 4)
            {
                a++;
                b--;
            }
            else if ((a % 2 == 0 || a % 3 == 0) && ((b % 2 == 0) || (b % 3 == 0)) )
            {
                break;
            }

            else if ((a % 2 != 0) || (a % 3 != 0))
            {
                a--;
                b++;
            }
            else if ((b % 2 != 0) || (b % 3 != 0))
            {
                a--;
                b++;
            }
        }
        cout << a << " " << b << endl;
    }
    return 0;
}