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

int main()
{
    fastIO();
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> v;
    for (int i = 0; i < m; ++i)
    {
        string a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    for (int i = 0; i < n; ++i)
    {
        string a;
        cin >> a;
        for (auto it : v)
        {
            if (a == it.first || a == it.second)
            {
                if (it.first.size() <= it.second.size())
                {
                    cout << it.first << " ";
                }
                else
                    cout << it.second << " ";
            }
        }
    }
    return 0;
}