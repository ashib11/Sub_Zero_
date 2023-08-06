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
    ll n, m;
    cin >> n >> m;

    ull x = (n / m);
    ull mx = ((n - m + 1) * (n - m)) / 2;
    ull mn = (x * (x - 1) / 2)*m +(n%m)*(n/m);
    if (m == 1)
        mn = mx;
    cout << mn << " " << mx << endl;
    return 0;
}