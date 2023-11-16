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
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        string x = to_string(i + 1);
        int l = x.size();
        // cout << x << endl;
        bool check = false;
        for (int p = 1; p < l; ++p)
        {
            // cout << x[p] << " " << x[p - 1] << endl;
            if (x[p] != x[p - 1])
            {
                // cout << x << endl;
                check = true;
                break;
            }
        }
        // cout << i + 1 << endl;
        if (!check)
        {
            int j = (i + 1) % 10;
            if (j == 0)
                continue;
            int k = 0;
            for (j; j <= 100; j *= 10)
            {
                k += j;
                if (k <= v[i])
                    cnt++;
                else
                    break;
            }
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
