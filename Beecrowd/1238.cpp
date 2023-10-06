#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string a, b;
        cin >> a >> b;
        if (a.length() > b.length())
        {
            for (int i = 0; i < b.length(); i++)
            {
                cout << a[i] << b[i];
            }
            for (int i = b.length(); i < a.length(); i++)
            {
                cout << a[i];
            }
        }
        else if (a.length() < b.length())
        {
            for (int i = 0; i < a.length(); i++)
            {
                cout << a[i] << b[i];
            }
            for (int i = a.length(); i < b.length(); i++)
            {
                cout << b[i];
            }
        }
        else
        {
            for (int i = 0; i < a.length(); i++)
            {
                cout << a[i] << b[i];
            }
        }
        cout << endl;
    }
    return 0;
}