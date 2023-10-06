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
    int n, w, wr;
    cin >> n >> w >> wr;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    if (wr >= w)
    {
        cout << "YES" << endl;
        return;
    }
    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }
    float remain = (w - wr) / 2;
    sort(all(v));
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {

        if (v[i] == v[i + 1] && (i + 1) < n)
        {
            sum += v[i];
            i++;
        }
    }
    // cout << remain << " " << sum << endl;
    if (sum >= remain)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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