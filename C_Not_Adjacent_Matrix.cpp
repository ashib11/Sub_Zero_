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
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));
    map<int, bool> mp;
    int val = 1;
    for (int i = 0; i < n; ++i)
    {
        v[i][i] = val;
        mp[val] = true;
        val++;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == j)
                continue;
            if (v[i][j] == 0)
            {
                for (int value = 1; value <= (n * n); ++value)
                {

                    if (!mp[value])
                    {

                        bool isValid = true;
                        for (int k = 0; k < 4; ++k)
                        {
                            int x = i + dx[k];
                            int y = j + dy[k];
                            if (x >= 0 and x < n and y >= 0 and y < n and abs(v[x][y] - value) == 1)
                            {
                                isValid = false;
                                break;
                            }
                        }
                        if (isValid)
                        {
                            v[i][j] = value;
                            mp[value] = true;
                            break;
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < 4; ++k)
            {
                int x = i + dx[k];
                int y = j + dy[k];
                if (x >= 0 and x < n and y >= 0 and y < n)
                {
                    ll dif = abs(v[i][j] - v[x][y]);
                    if (dif == 1)
                    {
                        cout << "-1" << endl;
                        return;
                    }
                }
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
