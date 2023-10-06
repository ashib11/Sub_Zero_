#include <bits/stdc++.h>
using namespace std;
int main()
{
    double h, m, s, t1, t2, arr[20];
    cin >> h >> m >> s >> t1 >> t2;
    double a, b, c, xt, yt;
    a = (h + (m / 60) + (s / 3600)) / 12;
    if (a > 1)
    {
        a--;
    }
    b = (m + (s / 60)) / 60;
    if (b > 1)
    {
        b--;
    }
    c = s / 60, xt = t1 / 12, yt = t2 / 12, arr[1] = a, arr[2] = b, arr[3] = c, arr[4] = xt, arr[5] = yt;
    sort(arr + 1, arr + 6);
    if (q)
    {
        /* code */
    }
    
        cout << "Yes";
    else
        cout << "No";
    return 0;
    return 0;
}