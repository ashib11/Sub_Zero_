#include <bits/stdc++.h>


using namespace std;

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2)
            for (int j = n - 1; j >= 0; --j)
            {
                if (j % 2 )
                    v[i][j] = (n * n) - (cnt++);
                else
                    v[i][j] = cnt;
            }
        else
        {
            for (int j = 0; j < n; ++j)
            {
                if (j % 2 == 0)
                    v[i][j] = (n * n) - (cnt++);
                else
                    v[i][j] = cnt;
            }
        }
    }
    for (auto it : v)
    {
        for (auto x : it)
        {
            cout << x << ' ';
        }
        cout << endl;
    }
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
