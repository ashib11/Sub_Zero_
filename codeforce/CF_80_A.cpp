#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, flag;
    cin >> n >> m;
    for (int i = n + 1; i <= m; i++)
    {
        flag = 0;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                // cout << "why" << i << endl;
                flag = 1;
                break;
            }
        }
        // cout << flag << endl;
        if (flag == 0)
        {
            // cout << "l"<< i << endl;
            i == m ? cout << "YES\n" : cout << "NO\n";
            break;
        }
    }
    if (flag == 1)
    {
        cout << "NO\n";
    }
    return 0;
}