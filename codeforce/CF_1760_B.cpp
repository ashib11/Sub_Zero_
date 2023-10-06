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
        string a;
        cin >> a;
        int max = int(a[0]);
        for (int i = 0; i < s; i++)
        {
            if (max < a[i])
                max = int(a[i]);
        }
        cout << max - 'a' + 1 << endl; 
    }
    return 0;
}