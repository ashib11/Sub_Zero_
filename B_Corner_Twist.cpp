#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m)), b(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; ++j)
            a[i][j] = str[j] - '0';
    }
    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; ++j)
            b[i][j] = str[j] - '0';
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < m; ++j)
    //     {
    //         cout << a[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < m - 1; ++j)
        {
            if (a[i][j] != b[i][j])
            {
                int k = b[i][j];
                int p = a[i][j];
                int dif = (k - p + 3) % 3;
                // cout << k << ' ' << p <<
                // cout << dif << endl;
                a[i][j] += dif;
                a[i + 1][j + 1] += dif;
                a[i][j] %= 3;
                a[i + 1][j + 1] %= 3;
                if (dif == 1)
                {
                    a[i][j + 1] += 2;
                    a[i + 1][j] += 2;
                }
                else
                {
                    a[i][j + 1] += 1;
                    a[i + 1][j] += 1;
                }
                a[i][j + 1] %= 3;
                a[i + 1][j] %= 3;

                // for (int i = 0; i < n; ++i)
                // {
                //     for (int j = 0; j < m; ++j)
                //     {
                //         cout << a[i][j];
                //     }
                //     cout << endl;
                // }
                // cout << endl;
            }
        }
    }

    // cout << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] != b[i][j])
            {
                cout << "NO" << endl;
                return;
            }
        }
        // cout << endl;
    }
    cout << "YES" << endl;
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
