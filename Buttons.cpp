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
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        cout << "First" << endl;
        return;
    }
    else if (a == b && c % 2 != 0)
    {
        cout << "First" << endl;
        return;
    }
    else
        cout << "Second" << endl;
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