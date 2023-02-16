#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, clicks = 0;

    cin >> n >> m;

    if (n == m)
        cout << "0" << endl;
    else if (n > m)
        cout << (n - m) << endl;
    else
    {
        while (1)
        {
            if ((n - 1) * 2 == m )
            {
                cout << clicks + 2 << endl; 
                return 0; 
            }
            n*=2; 
            clicks++; 
        }
    }

    return 0;
}
