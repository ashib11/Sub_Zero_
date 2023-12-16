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
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;
    int mx = -1;
    int sum = 0;
    int yo = m;
    for (int i = 0; i < (int)a.size(); ++i)
    {
        if (a[i] == '1')
        {
            sum++;
            if (yo)
            {
                sum--;
                yo--;
            }
        }
        if (a[i] == '2')
        {
            sum++;
        }
        if (a[i] == '0')
        {
            mx = max(mx, sum);
            sum = 0;
            yo = m;
        }
    }
    mx = max(sum, mx);
    cout << mx << endl;
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
