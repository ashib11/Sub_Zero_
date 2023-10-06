#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    int n,z;
    while (tc--)
    {
        cin >> n;
       z = (n+1)/3 ; 
       cout << n - 2*z << " " << z << endl; 
    }

    return 0;
}