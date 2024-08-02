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
bool valid(int i, int j, int n)
{
    if (i >= 0 and i < n and j >= 0 and j < n)
        return true;
    return false;
}
void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n, 0));
    v[0][0] = n*n;
    int val = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (valid(i + 1, j, n))
            {
                if (v[i + 1][j] == 0)
                {
                    v[i + 1][j] = val++;
                }
            }
            if (valid(i - 1, j, n))
            {
                if (v[i - 1][j] == 0)
                {
                    v[i - 1][j] = val++;
                }
            }
            if (valid(i, j + 1, n))
            {
                if (v[i][j + 1] == 0)
                {
                    v[i][j + 1] = val++;
                }
            }
            if (valid(i, j - 1, n))
            {
                if (v[i][j - 1] == 0)
                {
                    v[i][j - 1] = val++;
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
