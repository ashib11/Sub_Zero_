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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    for (int i = 0; i < m + 1; ++i)
    {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < m; ++i)
    {
        int cnt = (v[i] ^ v[m]);
        if (__builtin_popcount(cnt) <= k)
            ans++;
    }
    cout << ans << endl;
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