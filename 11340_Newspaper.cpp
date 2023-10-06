#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int k;
    cin >> k;
    map<char, int> mp;
    map<char, int>::iterator it;
    for (int i = 0; i < k; ++i)
    {
        char a;
        int b;
        cin >> a >> b;
        mp[a] = b;
    }
    int m;
    cin >> m;
    cin.ignore();
    double ans = 0;
    for (int i = 0; i < m; ++i)
    {
        string a;
        getline(cin, a);
        for (int j = 0; j < a.size(); ++j)
        {
            it = mp.find(a[j]);
            if (it != mp.end())
            {
                ans += it->second;
            }
        }
    }
    ans /= 100;
    printf("%0.2lf$\n", ans);
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}