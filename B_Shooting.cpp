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
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(make_pair(x, i + 1));
    }
    sort(all(v));
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans = ans + (v[i].first * (i)) + 1;
    }
    cout << ans << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i].second << " ";
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