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
// find_by_order();
// order_of_key();

void solve()
{
    int h, w, n;
    cin >> h >> w >> n;
    string str;
    cin >> str;
    vector<string> v(h);
    for (auto &i : v)
        cin >> i;
    int cnt = 0;
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            if (v[i][j] == '#')
                continue;
            bool chck = true;
            int x = i, y = j;
            for (auto it : str)
            {
                if (it == 'L')
                    y--;
                else if (it == 'R')
                    y++;
                else if (it == 'U')
                    x--;
                else if (it == 'D')
                    x++;
                if (x < 0 or x >= h or y < 0 or y >= w or v[x][y] == '#')
                {
                    chck = false;
                    break;
                }
            }
            if (chck)
                cnt++;
        }
    }
    cout << cnt << endl;
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
