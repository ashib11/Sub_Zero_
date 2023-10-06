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
    string a;
    cin >> a;
    unordered_map<char, int> mp;
    for (int i = 0; i < a.size(); ++i)
    {
        mp[a[i]]++;
    }
    for (auto it : mp)
    {
        
        cout << ++it.first << " " << it.second << endl;
    }
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