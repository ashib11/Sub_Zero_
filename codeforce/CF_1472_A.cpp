#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w, h, n, t;
    cin >> t;
    while (t--)
    {
        int count = 1;
        cin >> w >> h >> n;
        while (w % 2 != 1)
        {
            w /= 2;
            count*=2;
        }
        while (h % 2 != 1)
        {
            h /= 2;
            count*=2;
        }
        // cout << count << endl; 
        if (count >=n)
        {
            cout << "YES\n" ; 
        }
        else 
        cout << "NO\n" ; 
    }

    return 0;
}