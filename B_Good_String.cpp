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
    string a;
    cin >> a;
    int i, j;
    for (i = 0; i < n; ++i)
    {
        if (a[i] == '<')
            continue;
        else
            break;
    }
    for (j = 0; j < n; ++j)
    {
        if (a[n - j - 1] == '>')
            continue;
        else
            break;
    }

    cout << min(i, j) << endl;
}
int main()
{
    fastIO();
    int tc;
    // tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}