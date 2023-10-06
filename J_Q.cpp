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
int n;
ll sum(vector<int> &v, int n)
{
    if (n < 0)
        return 0;
    return v[n] + sum(v, n - 1);
}

void solve()
{
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    cout << sum(v, n - 1) << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}