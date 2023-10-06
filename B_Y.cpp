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
    vector<int> v(n);
    int cnt = 0;
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sort(all(v));
    ll t_sum = accumulate(all(v), 0);
    for (int i = n - 1; i >= 0; --i)
    {
        if (sum <= t_sum)
        {
            cnt++;
            sum += v[i];
            t_sum -= v[i];
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