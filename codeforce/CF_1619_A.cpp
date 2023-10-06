#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    string a;
    int flag = 0;
    int k;
    while (tc--)
    {
        cin >> a;
        flag = 0;

        if (a.size() % 2 == 0)
        {
            for (int i = 0; i < (a.size() / 2); i++)
            {
                if (a[i] != a[a.size() / 2 + i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}