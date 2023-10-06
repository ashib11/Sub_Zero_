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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    while (q--)
    {

        int x, y;
        cin >> x >> y;
        int a, b;
        a = lower_bound(v.begin(), v.end(), x) - v.begin();
        b = upper_bound(v.begin(), v.end(), y) - v.begin();
        cout << abs(b - a) << endl;
    }
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; ++i)
    {
        cout << "Case " << i << ":\n"; 
        solve();
    }
    return 0;
}