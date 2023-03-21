#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int e1, e2;
        e1 = (a - 1);
        if ((b > c))
        {
            e2 = (b - c) + c - 1;
        }
        else
            e2 = (c - b) + c - 1;
        e1 == e2 ? cout << "3\n" : e1 > e2 ? cout << "2\n"
                                           : cout << "1\n";
    }
    return 0;
}