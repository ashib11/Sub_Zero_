#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    int a, b;
    while (tc--)
    {
        cin >> a >> b;
        if (b-a == 0)
        {
            cout << 0 << endl; 
        }
        
        else if (((b - a) > 0 && (b - a) % 2 != 0) || ((b - a) < 0 && (b - a) % 2 == 0))
        cout << "1\n"; 
        else cout << 2 << endl; 
    }

    return 0;
}