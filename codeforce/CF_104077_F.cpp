#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, s, d, sum = 0;
    cin >> tc >> s >> d;
    while (tc--)
    {
        string a;
        cin >> a;
        if (a[0] != a[1]&& a[0]!=a[2] && a[1] != a[2])
        {
            sum += min(3 * s, 3* d);
        }
        else
            sum += min(3 * s, min((d + s), 2 * d));
    }
    cout << sum << endl;
    return 0;
}