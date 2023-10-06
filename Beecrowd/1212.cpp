#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        string a, b;
        cin >> a >> b;
        int count = 0;
        if (stoi(a) == 0 && stoi(b) == 0)
            break;
        int carry = 0;
        int x = min(a.length(), b.length());
        for (int i = a.length() - 1, j = b.length() - 1; x > 0; i--, j--, x--)
        {
            // cout << a[i] - '0' + b[j] - '0' + carry << endl;

            if (a[i] - '0' + b[j] - '0' + carry > 9)

            {
                count += 1;
                carry = 1;
            }
            else
                carry = 0;
        }
        // cout << "carr " << carry << endl;
        if (a.length() != b.length() && carry == 1)
        {

            int x = (a.length() - b.length());
            if (x < 0)
            {
                if (b[(x*-1) - 1] - '0' + carry > 9)
                {
                    count += 1;
                }
            }

            else
            {
                if (a[x - 1] - '0' + carry > 9)
                {
                    count += 1;
                }
            }
        }
        if (count == 0)
        {
            cout << "No carry operation.\n";
        }
        else if (count == 1)
            cout << "1 carry operation.\n";
        else
            cout << count << " carry operations.\n";
    }
    return 0;
}
