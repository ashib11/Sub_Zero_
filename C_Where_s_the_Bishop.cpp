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
    vector<string> v;
    for (int i = 0; i < 8; ++i)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = 1; i < 8; ++i)
    {
        for (int j = 1; j < 8; ++j)
        {
            if (v[i][j] == '#')
            {
                if ( v[i + 1][j - 1] == '#' && v[i + 1][j + 1] == '#' && v[i-1][j+1]== '#' && v[i - 1][j - 1] == '#')
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    return;
                }
            }
        }
        
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