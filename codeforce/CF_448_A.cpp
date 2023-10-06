#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    int suma = a1 + a2 + a3;
    int sumb = b1 + b2 + b3;

    if ((ceil(suma / 5.0)) + ceil(sumb / 10.0) > n)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}