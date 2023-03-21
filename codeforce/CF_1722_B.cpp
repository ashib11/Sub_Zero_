#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int s;
        cin >> s; 
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < s; i++)
        {
            if (a[i] == 'G')
            {
                a[i] = 'B';
            }
            if(b[i]=='G') b[i]= 'B'; 
        }
        if (a == b)

            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}