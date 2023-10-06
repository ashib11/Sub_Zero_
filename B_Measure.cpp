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
    int n;
    cin >> n;
    for (int i = 0; i <= n; ++i)
    {
        bool flag = true;
        for (int j = 1; j <= 9; ++j)
        {
            if (n % j == 0)
                if (i % (n / j) == 0)
                {
                    // cout << i << " " << n / j << " " << j << endl;
                    cout << j;
                    flag = false;
                    break;
                }
        }
        if (flag)
            cout << "-";
    }
    cout << endl;
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}