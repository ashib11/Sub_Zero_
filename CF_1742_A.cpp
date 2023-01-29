#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, a, b, c;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        cin >> a >> b >> c; 
        if ((a == b + c) || (b == c + a) || (c == a + b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}