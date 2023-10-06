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
    int x, y, z;
    cin >> x >> y >> z;
    x -= z;
    int cnt = 0;
    while (1)
    {
        x = x - z - y;
        if (x < 0)
            break;

        cnt++;
    }
    cout << cnt << endl;
    return 0;
}