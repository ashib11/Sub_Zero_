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
const int m = 10;
ll bxp(ll b, ll p)
{
    ll ans = 1;
    while (p)
    {
        if (p % 2)
         {
            ans = (ans*b)%m;
            --p;
        }
        else
        {
            b = (b*b)%m;
            p /= 2;
        }
    }
    return ans;
}
int main()
{
    fastIO();
    ll n;
    cin >> n;
    cout << bxp(8, n) << endl;
    return 0;
}