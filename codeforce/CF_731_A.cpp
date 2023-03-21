#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a, b = 'a';
    int ans = 0;
    while (cin >> a)
    {
         ans += min(abs(b - a), 26 - abs(b - a));
         b = a; 
    }
    cout << ans << endl; 
    return 0;
}