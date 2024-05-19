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

    ll n, q;
    cin >> n >> q;
    vector<vector<ll>> arr(4, vector<ll>(n + 1, 0));
    vector<vector<ll>> pre(4, vector<ll>(n + 1, 0));

    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        arr[x][i] = 1;
    }

    for (int i = 1; i <= 3; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            pre[i][j] = pre[i][j - 1] + arr[i][j];
        }
    }
    for (int k = 1; k <= q; ++k)
    {
        ll l, r;
        cin >> l >> r;
        for (int i = 1; i <= 3; ++i)
        {
            cout << pre[i][r] - pre[i][l - 1];
            if (i != 3)
                cout << ' ';
        }
        cout << endl;
    }
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    while (tc--)
    {

        solve();
    }
    return 0;
}
