#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    int a, b;
    a = b = 0;
    for (int i = 0; i < tc * tc; i++)
    {
        char x;
        cin >> x;
        if (x == 'x')
        {
            a++;
        }
        cout << x << endl; 
        if (x == 'o')
        {
            b++; 
        }
    }
    if (a == b)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
    return 0;
}