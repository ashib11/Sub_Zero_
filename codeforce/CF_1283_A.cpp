#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, h, m;
    cin >> tc;
    while (tc--)
    {
        cin >> h >> m;
        cout << 24 * 60 - ((h * 60) + m) << endl;
    }

    return 0;
}