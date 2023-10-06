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
    string a, b;
    cin >> a >> b;
    string aa = a;
    string bb = b;
    reverse(all(a));
    reverse(all(b));
    if (a > b)
        cout << aa << " > " << bb << endl;
    else if (a < b)
        cout << aa << " < " << bb << endl;
    else
        cout << aa << " = " << bb << endl;
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