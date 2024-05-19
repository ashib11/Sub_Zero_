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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3
const int N = 1e5 + 7;
bool visited[5][N];
int arr[5][N] = {0};
int n, m;
void dfs(int st, int fin)
{
    if (visited[st][fin] or arr[st][fin])
        return;
    if (st < 1 or st > 3 or fin < 1 or fin > n)
        return;
    visited[st][fin] = true;
    dfs(st, fin + 1);
    dfs(st + 1, fin);
    dfs(st - 1, fin);
    dfs(st, fin - 1);
}
void solve()
{

    cin >> n >> m;

    while (m--)
    {
        int x, y;
        char a;
        cin >> x >> a;
        if (a == 'H')
            y = 1;
        else if (a == 'M')
            y = 2;
        else
            y = 3;
        swap(x, y);
        arr[x][y] = 1;
        arr[x + 1][y] = 1;
        arr[x - 1][y] = 1;
        arr[x][y + 1] = 1;
        arr[x][y - 1] = 1;
        arr[x + 1][y + 1] = 1;
        arr[x - 1][y - 1] = 1;
        arr[x + 1][y - 1] = 1;
        arr[x - 1][y + 1] = 1;
    }

    for (int i = 1; i <= 3; ++i)
    {
        if (arr[i][1] == 0)
            dfs(i, 1);
    }
   
    for (int i = 1; i <= 3; ++i)
    {
        if (visited[i][n])
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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
