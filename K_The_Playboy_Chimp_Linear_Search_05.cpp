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
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    int nq;
    cin >> nq;
    while (nq--)
    {
        int q;
        cin >> q;
        auto x = lower_bound(v.begin(), v.end(), q);
        auto y = upper_bound(v.begin(), v.end(), q);

        if (x == v.begin())
            cout << "X ";
        else
            cout << *--x << " ";
        if (y == n + v.begin())
            cout << "X" << endl;
        else
            cout << *y << endl;
    }
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
