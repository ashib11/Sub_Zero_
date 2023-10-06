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
    vector<pair<int, int>> v(m);
    for (auto &i : v)
    {
        cin >> i.first >> i.second;
    }
    for (int i = 0; i < n; ++i)
    {
        if (i & 1)
            cout << 0;
        else
            cout << 1;
    }
    cout << endl;
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