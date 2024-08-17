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
    vector<pair<int, int>> vp(n);
    ll lft = 0, right = 0;
    ll lft_od = 0, rght_od = 0;
    for (auto &[a, b] : vp)
    {
        cin >> a >> b;
        lft += a, right += b;
    }
    if (lft % 2 == right % 2)
    {
        if (lft % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            for (auto [a, b] : vp)
            {
                if (a % 2 != b % 2)
                {
                    cout << "1" << endl;
                    return;
                }
            }
            cout << "-1" << endl;
        }
    }
    else
    {
        cout << "-1" << endl;
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
