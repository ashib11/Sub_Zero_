#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string n;
        cin >> n;
        int flag = 1;
        for (int i = 0; i < n.size() - 1; i++)
        {
            if (n[i] != n[i + 1])
            {
                if (n[i] > n[i + 1])
                {
                    flag = 0;
                    break;
                }
            }
        }

        int s = stoi(n);
        if (s < 10)
        {
            // cout << "how\n";
            cout << s << endl;
        }

        else if (flag == 0)
        {
            // cout << "flag = 0\n";
            cout << 9 + (s / 10) - 1 << endl;
        }
        else
        {
            // cout << "else\n";
            cout << 9 + (s / 10) << endl;
        }
    }
    return 0;
}
