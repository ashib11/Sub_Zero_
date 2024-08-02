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
    int n;
    cin >> n;
    vector<vector<int>> v(2, vector<int>(n));
    v[0][0] = (2 * n) - 1;
    v[1][0] = 1;
    v[0][n - 1] = n;
    v[1][n - 1] = (2 * n);
    ll val = (2 * n) - 2;
    for (int i = 0; i < 2; ++i)
    {
        if (!i)
        {
            for (int j = n - 2; j >= 1; j -= 2)
            {
                v[i][j] = val;
                val -= 2;
            }
            for (int j = 1; j < n; j += 2)
            {
                v[i][j] = (j + 1);
            }
        }
        else {
             for (int j = 0; j < n; j += 2)
            {
                v[i][j] = (j + 1);
            }
              for (int j= 1; j < n; j+=2)
            {
                v[i][j] = val+1;
                val += 2;
            }
        }
    }
    v[1][n-1] = 2*n ; 
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
