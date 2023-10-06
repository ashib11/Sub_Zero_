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
    string x = ".1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    cout << "3";
    int n;
    cin >> n;
    for (int i = 0; i < n+1; ++i)
        cout << x[i];
    cout << endl;
}
int main()
{
    fastIO();
    int tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}