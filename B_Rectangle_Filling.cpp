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

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n + 2][m + 2] = {0};
    for (int i = 1; i <= n; ++i)
    {
        string str;
        cin >> str;
        for (int j = 1; j <= m; ++j)
        {
            char x = str[j - 1];
            if (x == 'B')
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
        }
    }

    if (arr[1][1] == arr[1][m])
    {
        ll cnt = 0;
        for (int i = 1; i <= m; ++i)
        {
            if (arr[1][i] != arr[1][1])
                cnt++;
        }
        for (int i = 1; i <= m; ++i)
            if (arr[n][i] == arr[1][1])
                cnt++;
        if (cnt >= 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    else
    {
        ll cnt = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (arr[i][1] != arr[1][1])
                cnt++;
        }
        for (int i = 1; i <= n; ++i)
            if (arr[i][m] == arr[1][1])
                cnt++;
        if (cnt >= 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl; 
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
