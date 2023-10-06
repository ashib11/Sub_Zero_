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
int N = 1e5 + 10;
void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    set<int> s;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        mp[x]++;
        s.insert(x);
    }
    int mx = 0;
    for (auto it : mp)
    {
        if (it.second > mx)
            mx = it.second;
    }
    
    int x = s.size();

    cout << max(min(x-1,mx),min(x,mx-1)) << endl;
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