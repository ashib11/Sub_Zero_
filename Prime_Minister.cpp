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
    ll all_seat = 0;
    for (auto &i : v)
    {
        cin >> i;
        all_seat += i;
    }
    vector<int> ans;
    ans.push_back(1);
    ll team = v[0];
    for (int i = 1; i < n; ++i)
    {
        if (v[0] >= v[i] * 2)
        {
            ans.push_back(i + 1);
            team += v[i];
        }
    }
    if (team * 2 <= all_seat)
    {
        cout << 0 << endl;
        return;
    }
    cout << ans.size() << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{
    fastIO();
    int tc;
    // cin >> tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}