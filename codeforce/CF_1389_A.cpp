#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        if(a*2>b) {
            cout << "-1 -1\n";  
        }
        else cout << a << " " << a*2 << endl;
    }

    return 0;
}