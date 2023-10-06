#include <bits/stdc++.h>
using namespace std;
int main()
{
   long double a, b, c, d;
    cin >> a >> b >> c;
    d = ceil(b / c) * ceil(a / c);
    cout <<fixed<< setprecision(0) << d << endl;

    return 0;
}