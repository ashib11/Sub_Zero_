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
    vector<string> v(4);
    for (auto &i : v)
        cin >> i;
    int cnt = 0;
    for (int i = 0; i < 3; ++i)
    {

        for (int j = 0; j < 3; ++j)
        {
            cnt = 1;
            if (v[i][j] == v[i][j + 1])
                cnt++;
            if (v[i][j] == v[i + 1][j])
                cnt++;
            if (v[i][j] == v[i + 1][j + 1])
                cnt++;
            // cout << i << ' ' << j << ' ' << cnt << endl;
            if (cnt >= 3 or cnt == 1)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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
