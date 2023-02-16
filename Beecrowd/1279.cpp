#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int year;
    int hulu, bulu, leap;
    while (scanf("%lld", &year) != EOF)
    {
        hulu = leap = bulu = 0;
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {

            leap = 1;
            if (year % 55 == 0)
            {
                bulu = 1;
            }
        }
        if (year % 15 == 0)
        {
            hulu = 1;
        }
        if (leap == 1)
        {
            cout << "This is leap year.\n";
        }
        if (hulu == 1)
        {
            cout << "This is huluculu festival year.\n";
        }
        if (bulu == 1)
        {
            cout << "This is bulukulu festival year.\n";
        }
        if (leap == 0 && hulu == 0 && bulu == 0)
        {
             cout << "This is an ordinary Year\n"; 
        }

        cout << "\n";
    }

    return 0;
}