#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t, n, k, x;
    cin >> t;
 
    while(t--)
    {
        long long mul = 1;
        cin >> n >> k;
 
        while(n--)
        {
            cin >> x;
            mul *= x;
        }
 
        if(2023 % mul != 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
 
            cout << 2023 / mul << " ";
            k--;
 
            while(k--)
                cout << "1 ";
 
            cout << endl;
        }
    }
 
    return 0;
}