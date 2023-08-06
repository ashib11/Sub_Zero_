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
    int x = min(a, b);
    ll ans = 1;
    for (int i = 1; i <= x; ++i)
        ans *= i;
    cout << ans << endl;
    return 0;
}