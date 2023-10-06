#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    if ((a & 1) && (b & 1))
    {
        if (b * b * 1ll <= a * 1ll)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else if (a % 2 == 0 && (b % 2 == 0))
    {

        if (b * b * 1ll <= a * 1ll)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}