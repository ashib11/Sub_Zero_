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
    ll c, sum = 0;
    cin >> n >> c;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        sum += v[i];
        c -= 1ll * v[i] * v[i];
    }
    c /= 4;

    ll lo = 0, h = 1E9;
    while (h > lo)
    {
        ll mid = (lo + h) / 2;
        if (mid * mid * n + mid * sum < c)
        {
            lo = mid + 1;
        }
        else h = mid; 
    }
    cout << lo << endl; 
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