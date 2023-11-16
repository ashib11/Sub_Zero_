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
    for (auto &i : v)
        cin >> i;
    sort(all(v));
    int k = 0;
    ll cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        // cout << v[i] * 2 << " " << v[k] << endl;
        if (v[i] >= 2 * v[k])
        {
            // cout << i << endl;
            k++;
        }
    }
    cout << n - min(n / 2, k) << endl;
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