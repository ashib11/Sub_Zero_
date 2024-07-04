#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    string a, b;
    cin >> a >> b;
    int ans = 1e8;

    for (int i = 0; i < b.size(); ++i)
    {
        int p1 = i;
        int j = 0;

        while (j < a.size())
        {
            if (a[j] == b[i])
            {
                ++i;
                if (i == b.size())
                    break;
            }
            ++j;
        }

        ans = min(ans, (int)a.size() + (int)b.size() - (i - p1));
    }

    cout << ans << endl;
}

int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
