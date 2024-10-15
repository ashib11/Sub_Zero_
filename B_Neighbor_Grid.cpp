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
    vector<vector<int>> v(n, vector<int>(m));
    for (auto &it : v)
    {
        for (auto &x : it)
            cin >> x;
    }
    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < m; ++j)
        {
            int cnt = 0;
            if (i + 1 < n)
                cnt++;
            if (j + 1 < m)
                cnt++;
            if (i - 1 >= 0)
                cnt++;
            if (j - 1 >= 0)
                cnt++;
            if (v[i][j] > cnt)
            {

                cout << "NO" << endl;
                return;
            }
            v[i][j] = cnt;
        }
    }
    cout << "YES" << endl; 
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
