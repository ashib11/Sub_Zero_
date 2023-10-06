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
    vector<pair<int, int>> v[38];
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int c;
        cin >> c;
        for (int j = 1; j <= c; ++j)
        {
            int a;
            cin >> a;
            v[a].push_back({j, i});
        }
    }
    int x;
    cin >> x;
    if (!v[x].empty())
    {
        sort(all(v[x]));
        set<int> s;
        s.insert(v[x][0].second); 
        for (size_t i = 1; i < v[x].size(); ++i)  
        {
            if (v[x][i].first == v[x][i - 1].first)
            {
                if (v[x][i].second < v[x][i - 1].second)
                {
                    s.insert(v[x][i].second);
                }
                else
                {
                    s.insert(v[x][i - 1].second);
                }
            }
        }
        cout << s.size() << endl;
        for (auto it : s)
            cout << it << " ";
        cout << endl;
    }
    else
        cout << 0 << endl;
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
