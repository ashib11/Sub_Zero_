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
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    char x = 'a';
    for (int i = 0; i < n; ++i)
    {
        if (i % b == 0)
        {
             x = 'a';
        }

        cout << x;
        x++;
    }
    cout << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}