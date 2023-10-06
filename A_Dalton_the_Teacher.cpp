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
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        if (x == i)
            cnt++;
    }
    cout << cnt / 2 + cnt%2 << endl; 
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