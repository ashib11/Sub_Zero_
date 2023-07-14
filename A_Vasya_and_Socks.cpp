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
    int n, m;
    cin >> n >> m;
    int y = n;
    while (n >= m)
    {
        y += n / m;
        n = (n / m) + (n % m);
    }

    cout << y << endl;
    return 0;
}