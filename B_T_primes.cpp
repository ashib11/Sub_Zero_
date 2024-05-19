#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, root, flag = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        flag = 0;
        cin >> x;

        if (x == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        root = sqrt(x);

        if (x == root * root)
        {
            for ( i = 2; i * i <= root; i++)
            {
                if (root % i == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if (flag)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}