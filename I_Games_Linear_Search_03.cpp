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
    vector<int> h(n);
    vector<int> a(n);
    ll ans = 0;
    for (int i = 0; i < n; ++i)
        cin >> h[i] >> a[i];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (h[i] == a[j])
                ans++;
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