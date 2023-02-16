#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int p, q, r, s,l;
    p = a + b * c;
    q = a * (b + c);
    r = a * b * c;
    s = (a + b) * c;
    l = a+ b + c; 
    int ans =max(l, max (s,( max(max(p,q),r)))); 
        cout << ans; 
    return 0;
}