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
    int n, x;
    ll sum=0, cnt =0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    for (int i = 1; i <= 5; ++i)
    {
        if ((sum + i) % (n + 1) != 1)
        {
            cnt += 1;
        }
    }
    cout << cnt << endl; 
}
int main()
{
    fastIO();
    int tc;
    tc = 1; 
    while (tc--)
    {
        solve();
    }
    return 0;
}