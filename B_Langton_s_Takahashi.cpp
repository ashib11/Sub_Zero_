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

char clockwise(char x)
{
    if (x == 'U')
        return 'R';
    if (x == 'R')
        return 'D';
    if (x == 'D')
        return 'L';
    if (x == 'L')
        return 'U';
}
char anticlcok(char x)
{
    if (x == 'U')
        return 'L';
    if (x == 'L')
        return 'D';
    if (x == 'R')
        return 'U';
    if (x == 'D')
        return 'R';
}
void solve()
{
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<char>> v(h, vector<char>(w, '.'));
    char cur = 'U';
    int x = 0, y = 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[x][y] == '.')
        {
            v[x][y] = '#';
            cur = clockwise(cur);
        }
        else
        {
            v[x][y] = '.';
            cur = anticlcok(cur);
        }

        if (cur == 'U')
            x = (x - 1 + h) % h;
        else if (cur == 'D')
            x = (x + 1) % h;
        else if (cur == 'R')
            y = (y + 1) % w;
        else
            y = (y - 1 + w) % w;
    }
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
            cout << v[i][j];
        cout << endl;
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
