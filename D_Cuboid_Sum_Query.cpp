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
    vector<vector<vector<int>>> v(n + 1, vector<vector<int>>(n + 1, vector<int>(n + 1, 0)));
    vector<vector<vector<int>>> pre(n + 1, vector<vector<int>>(n + 1, vector<int>(n + 1, 0)));

    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= n; y++)
        {
            for (int z = 1; z <= n; z++)
            {
                cin >> v[x][y][z];
                pre[x][y][z] = v[x][y][z] + pre[x - 1][y][z] + pre[x][y - 1][z] + pre[x][y][z - 1] - pre[x - 1][y - 1][z] - pre[x - 1][y][z - 1] - pre[x][y - 1][z - 1] + pre[x - 1][y - 1][z - 1];
            }
        }
    }
    int q; cin >> q; 
    while(q--){
        int x,x1, y,y1, z,z1; 
        cin >> x >> x1 >> y >> y1 >> z >> z1; 
        ll ans = pre[x1][y1][z1]
    }
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
