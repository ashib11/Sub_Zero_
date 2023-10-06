#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int a, b;
    cin >> a >> b;

    int q = a / b;
    int r = a % b;

    if (a < 0 && b > 0 && r != 0)
    {
        q--;
        r += b;
    }
    else if (a < 0 && b < 0 && r != 0)
    {
        q++;
        r -= b;
    }

    cout << q << " " << r << endl;
    return 0;
}