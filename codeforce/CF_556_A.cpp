#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    int count = 0, count0 = 0;
    cin >> tc;
    char a;
    for (int i = 0; i < tc; i++)
    {
        
        cin >> a;
        if (a == '0')
        {
            count++;
        }
        if (a == '1')
            count0++;
    }
    cout << tc - min(count, count0) * 2 << endl;

    return 0;
}