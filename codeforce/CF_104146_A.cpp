#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, alice = "Alice", bob = "Bob", cindy = "Cindy";
    cin >> a;
    int al = 0, b = 0, c = 0, x = a.size(), flag = 0;
    if (a[0] =='a' || a[0] == 'b' || a[0] == 'c')
    {

        cout << "SOMETHING'S WRONG\n";
        flag = 1;
    }

    else if ((x == 5))
    {
        for (int i = 0; i < x; i++)
        {
            if (a[i] == alice[i])
            {
                al++;
            }
            if (a[i] == cindy[i])
            {
                c++;
            }
        }
    }

    else if (x == 3)
    {
        for (int i = 0; i < x; i++)
        {
            if (a[i] == bob[i])
            {
                b++;
            }
        }
    }


    int y = max(max(al, b), c);

    if (flag ==0)
    {
        if (al == y)
        {
            cout << "Alice\n";
        }
        else if (y == b)
        {
            cout << "Bob\n";
        }
        else if (y == c)
            cout
                << "Cindy\n";

        else
        {
            cout << "CAN'T TELL\n";
        }
    }
    return 0;
}