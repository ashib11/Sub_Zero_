#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int h, m, s, c;
    while (scanf("%2d%2d%2d%2d", &h, &m, &s, &c) == 4)
    {
        ll sum;
        sum = c * 10 + s * 1000 + m * 60000 + h * 3600000;
        h = sum / 8640000;
        sum %= 8640000;
        m = sum / 86400;
        sum %= 86400;
        s = sum / 864;
        sum %= 864;
        c = sum * 100 / 864;
        printf("%d%02d%02d%02d\n", h, m, s, c);
    }
    return 0;
}