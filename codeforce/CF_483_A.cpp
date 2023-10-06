#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
typedef long long ll;
int main()
{

    ll a, b, c, l, r;
    cin >> l >> r;
    if (l % 2 != 0)
    {
        l += 1;
    }
    if (r - l < 2)
    {
        cout << "-1" << endl;
    }
    else
    {
        a = l;
        b = l + 1;
        c = l + 1 + 1;
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}