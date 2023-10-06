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
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x > m)
            v.push_back({x, i + 1});
    }
    int pos = n;
    while (!v.empty())
    {
        if (v.front().first > m)
        {
            int temp = v.front().first - m;
            v.push_back({temp, v.front().second});
            pos = v.front().second;
        }
        v.erase(v.begin());
    }
    cout << pos << endl;
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