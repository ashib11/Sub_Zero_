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
    ll cnt = 0;
    for (int i = 1; i <=n; ++i)
    {
        if (a[i - 1] == '.')
        {
            cnt++;
            i += 2;
        }
    }
    cout << cnt << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}