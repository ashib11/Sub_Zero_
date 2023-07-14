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
    int a, b;
    cin >> a >> b;
    int x = a;
    while (x)
    {
        if (x < b)
            break;
        int r = x % b;
        x = x / b;
        // cout << x << endl;
        a += x;
        x += r;
    }
    cout << a << endl;
    return 0;
}