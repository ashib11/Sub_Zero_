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
const int N = 10;
bitset<N> S[15];
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int m;
        cin >> m;
        while (m--)
        {
            int x;
            cin >> x;
            S[i][x] = 1;
        }
    }
    int ans = -1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int cnt = (S[i] & S[j]).count();
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}