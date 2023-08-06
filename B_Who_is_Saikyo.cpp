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
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < 2 * m; ++i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if (is_sorted(all(v)))
    {
        cout << v[0] << endl;
        return; 
    }
    reverse(all(v));
    if (is_sorted(all(v)))
        cout << v[v.size()-1] << endl;
    else
        cout << -1 << endl;
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